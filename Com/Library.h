#pragma once

struct IHen
{
	virtual void __stdcall Cluck() = 0;

};


IHen * __stdcall CreateHen();
