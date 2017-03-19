//
// pch.h
// Header for standard system include files.
//

#pragma once

#include <collection.h>
//#include "windows.foundation.collections.h"
#include <ppltasks.h>


#include <windows.h>
#include <wrl.h>

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

#define TRACEW OutputDebugString
#define ASSERT _ASSERTE

