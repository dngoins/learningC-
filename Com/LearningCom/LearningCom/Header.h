#pragma once


#include "windows.h"
#include <crtdbg.h>
#include <wrl.h>
#include <Unknwn.h>


using namespace Microsoft::WRL;


#define TRACE OutputDebugString
#define ASSERT _ASSERTE

struct ComException
{
	HRESULT error;

	ComException(HRESULT const hr) : error(hr) {}
};

inline void HR(HRESULT const hr)
{
	if (S_OK != hr)
	{
		throw ComException(hr);
	}
}


struct __declspec(uuid("ac6e53e7-d42c-4b42-b4a9-e62d99f94ead")) IHen : IUnknown
{
	virtual HRESULT Cluck() = 0;
};

HRESULT __stdcall CreateHen(IHen ** hen);
