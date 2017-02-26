#include "Header.h"


struct Hen: RuntimeClass<RuntimeClassFlags<WinRtClassicComMix>,
				IHen>
{
	
	Hen() 
	{
		TRACE(L"Cheep\n");
	}

	~Hen()
	{
		TRACE(L"Bye-Bye\n");
	}

	HRESULT Cluck()
	{
		TRACE(L"Cluck\n");
		return S_OK;
	}

	//ULONG __stdcall AddRef()
	//{
	//	return _InterlockedIncrement(&m_count);
	//}

	//ULONG __stdcall Release()
	//{
	//	ULONG const result = _InterlockedDecrement(&m_count);
	//	if(0 == result)
	//	{
	//		delete this;
	//	}
	//	return result;
	//}

	//HRESULT STDMETHODCALLTYPE QueryInterface(
	//	/* [in] */ REFIID riid,
	//	/* [iid_is][out] */ _COM_Outptr_ void __RPC_FAR *__RPC_FAR *ppvObject)
	//{
	//	*ppvObject = nullptr;
	//	
	//	if ((__uuidof(IHen) == riid )|| ( __uuidof(IUnknown) == riid) )
	//	{
	//		*ppvObject = static_cast<IHen *>(this);
	//		
	//	}
	//	else
	//		return E_NOINTERFACE;

	//	static_cast<IUnknown *>(*ppvObject)->AddRef();
	//	return S_OK;
	//}


};


HRESULT __stdcall CreateHen(IHen ** result)
{
	ASSERT(result);
	//*result = new (std::nothrow) Hen;
	*result = nullptr;
	ComPtr<IHen> hen = Make<Hen>();

	//if (0== *result)
	if(!hen)
	{
		return E_OUTOFMEMORY;
	}

	//(*result)->AddRef();
	*result = hen.Detach();
	return S_OK;
}

int main()
{
	ComPtr<IHen> hen;

	if (S_OK != CreateHen(hen.GetAddressOf()))
	{
		return 0;
	}

	hen->Cluck();

	//hen->Release();
	return 0;
}
