#pragma once

#include <wrl.h>
#include <KtmW32.h>

#pragma comment (lib, "KtmW32.lib")


#define TRACEW OutputDebugString
#define ASSERT _ASSERTE

EXTERN_C IMAGE_DOS_HEADER __ImageBase;
#define HINST_THISCOMPONENT ((HINSTANCE)&__ImageBase)

struct ComException
{
	HRESULT result;
	explicit ComException(HRESULT const value) : result(value)
	{

	}
};

inline void HR(HRESULT const result)
{
	_ASSERTE(S_OK == result);
	if (S_OK != result)
	{
		throw ComException(result);
	}
}

struct ComRuntime
{
	ComRuntime()
	{
		HR(CoInitializeEx(nullptr,
			COINIT_MULTITHREADED));
	}
	~ComRuntime()
	{
		CoUninitialize();
	}
};

