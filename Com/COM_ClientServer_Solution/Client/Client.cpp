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

	printf("\"%ls\" length=%d empty=%s\n",
		Buffer(s),
		Length(s),
		Empty(s) ? "Yes" : "No");

	
}