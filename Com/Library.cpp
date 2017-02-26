#include "Library.h"
#include <windows.h>

#define TRACE OutputDebugString

struct Hen: IHen
{
		Hen()
		{
			TRACE("Cheep!\n");
		}
		
		~Hen()
		{
			TRACE("Bye-Bye!\n");
		}
		
		void __stdcall Cluck()
		{
			TRACE("Cluck\n");
		}
};

IHen * __stdcall CreateHen()
{
	return new Hen;
}
