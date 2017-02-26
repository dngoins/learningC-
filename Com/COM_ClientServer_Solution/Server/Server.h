#pragma once

#include <unknwn.h>

struct __declspec(uuid("d3b7f446-b6d8-429b-90bd-6be02e6a2d00"))
	Hen;

struct __declspec(uuid("06ea92ed-e697-4d0d-b5a9-912e7e71e007"))
	IHen : IUnknown
{
	virtual void __stdcall Cluck() = 0;
};

struct __declspec(uuid("2dfb8e73-fb15-4359-9077-fb5b7d4939e6"))
	IHatchery : IUnknown
{
	virtual HRESULT __stdcall CreateHen(IHen ** hen) = 0;
};