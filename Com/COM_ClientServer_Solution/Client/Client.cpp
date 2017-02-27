#include "Precompiled.h"
#include "..\Server\Server.h"
#include "Implements.h"
#include "HandleStrings.h"

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


	String s = CreateString(L"Hello World");
	unsigned length = 0;
	auto buffer = Buffer(s, length);

	printf("\"%ls\" length=%d empty=%s\n",
		buffer,
		length,
		0 == length ? "Yes" : "No");

	String sNewMsg = Format(L"Hello %s", Buffer(s));

	TRACEW(Buffer(sNewMsg));
}

class StringReference
{
	HSTRING m_string;
	HSTRING_HEADER m_header;

public:
	StringReference(StringReference const &) = delete;
	StringReference & operator=(StringReference const &) = delete;
	void * operator new(std::size_t) = delete;	
	void * operator new[](std::size_t) = delete;
	void operator delete(void *) = delete;
	void operator delete[](void *) = delete;

	//shallow copy
	StringReference(wchar_t const * const value,
		unsigned length)
	{
		HR(WindowsCreateStringReference(value,
			length,
			&m_header,
			&m_string));

	}

	template <unsigned Count>
	StringReference(wchar_t const (&value)[Count]) :
	StringReference(value, Count -1 )
	{
		
	}

	HSTRING Get() const noexcept
	{
		return m_string;
	}
};

// usage: 
// StringReference s(L"Hello World");
// Call(s.Get());
//
// void Call (HSTRING string)
// { printf(%ls\n", WindowsGetStringRawBuffer(string, nullptr)); }
//
// another example: shows that it's smart enough to not use the same reference
// void Call (HSTRING string) 
// {
//		String copy;
//		HR(WindowsDuplicateString(string, copy.GetAddressOf()));
//		ASSERT(string != copy.Get());
//	}
//

