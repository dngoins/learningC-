#include "Precompiled.h"
#include "..\Server\Server.h"
#include <type_traits>

using Microsoft::WRL::ComPtr;

template<typename T>
struct Cloaked : T {};


template <typename ... Interfaces>
class __declspec(novtable) Implements : public Interfaces ...
{
	long m_references = 1;

	template <typename T>
	struct IsCloaked : std::false_type {};

	template <typename T>
	struct IsCloaked<Cloaked<T>> : std::true_type {};

	template <int = 0>
	void * QueryInterface(GUID const & id) noexcept
	{
		return nullptr;
	}

	template <typename First, typename ... Rest>
	void * QueryInterface(GUID const & id) noexcept
	{
		if (id == __uuidof(First))
		{
			return static_cast<First *>(this);
		}

		return QueryInterface<Rest ...>(id);
	}

	template<typename First, typename ... Rest>
	void * BaseQueryInterface(GUID const & id) noexcept
	{
		if (id == __uuidof(First) ||
			id == __uuidof(IUnknown) ||
				std::is_base_of<IInspectable, First>::value && id == __uuidof(IInspectable))
		{
		
			return static_cast<First *>(this);
		}

		return QueryInterface<Rest ...>(id);
	}

	template<int = 0>
	void CopyInterfaces(GUID * const) noexcept {}

	template<typename First, typename ... Rest>
	void CopyInterfaces(GUID * ids) noexcept
	{
#pragma warning (push)
#pragma warning(disable:4127) // conditional expression const

		if (!IsCloaked<First>::value)
		{
			*ids++ = __uuidof(First);
		}
#pragma warning(pop)

		CopyInterfaces<Rest ...>(ids);
	}

	template<int = 0>
	unsigned CountInterfaces() noexcept { return 0; }

	template<typename First, typename ... Rest>
	unsigned CountInterfaces() noexcept
	{
		return !IsCloaked<First>::value + CountInterfaces<Rest ...>();
	}


protected:
	virtual ~Implements() noexcept{}

public:
	unsigned long __stdcall AddRef() noexcept
	{
		return InterlockedIncrement(&m_references);
	}

	unsigned long __stdcall Release() noexcept
	{
		unsigned long const count = InterlockedDecrement(&m_references);

		if (0 == count)
		{
			delete this;
		}

		return count;
	}

	HRESULT __stdcall QueryInterface(GUID const & id,
		void ** object) noexcept
	{
		*object = BaseQueryInterface<Interfaces ...>(id);

		if(!*object)
		{
			return E_NOINTERFACE;
		}
		static_cast<IUnknown *>(*object)->AddRef();
		return S_OK;
	}

	HRESULT __stdcall GetIids(unsigned long * pCount,
		GUID ** pIds) noexcept
	{
		*pCount = 0;
		*pIds = nullptr;

		//Now must take into account cloaked interfaces
		//unsigned const count = sizeof ... (Interfaces);
		unsigned const count = CountInterfaces<Interfaces ...>();
		
		if (0 == count)
			return S_OK;
		
		GUID * ids = static_cast<GUID *>(CoTaskMemAlloc(sizeof(GUID) * count));

		if (!ids)
		{
			return E_OUTOFMEMORY;
		}
		
		CopyInterfaces<Interfaces ...>(ids);

		*pCount = count;
		*pIds = ids;
			
		return S_OK;
	}


	HRESULT __stdcall GetRuntimeClassName(HSTRING *) noexcept
	{
		return E_NOTIMPL;
	}

	HRESULT __stdcall GetTrustLevel(TrustLevel * level) noexcept
	{
		*level = BaseTrust;
		return S_OK;
	}

};

struct __declspec(uuid("e8c0051b-2d8f-482c-93b1-906a36675fa3")) __declspec(novtable)
	IClient : IInspectable
{
	virtual HRESULT __stdcall Cluck() = 0;
};


class Client : public Implements<IClient>
{
public:
	Client()
	{
		TRACEW(L"Client\n");
	}

	~Client()
	{
		TRACEW(L"Bye\n");
	}


	HRESULT __stdcall Cluck() noexcept
	{
		TRACEW(L"Cluck\n");
		return S_OK;
	}

	
};

template <typename T>
ComPtr<T> Make() noexcept
{
	ComPtr<T> result;
	result.Attach(new (std::nothrow) T);
	return result;
}


HRESULT CreateClient(IClient ** _client) noexcept
{
	ComPtr<IClient> temp = Make<Client>();

	if(!temp)
	{
		*_client = nullptr;
		return E_OUTOFMEMORY;
	}

	*_client = temp.Detach();
	return S_OK;
}


int main()
{
	//ComRuntime runtime;

	ComPtr<IClient> client;

	ASSERT(S_OK == CreateClient(client.GetAddressOf()));
	ULONG count = 0;
	GUID * guids = nullptr;

	ASSERT(S_OK == client->GetIids(&count, &guids));

	ASSERT(1 == count);
	ASSERT(guids[0] == __uuidof(IClient));

	CoTaskMemFree(guids);

	client->Cluck();

	Microsoft::WRL::ComPtr<IUnknown> unknown;
	ASSERT(S_OK == client.As(&unknown));

	
}