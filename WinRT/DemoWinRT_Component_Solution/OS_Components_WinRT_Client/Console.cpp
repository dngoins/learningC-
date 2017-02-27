#include "Precompiled.h"
#include <roapi.h>
#include <wrl.h>
#include "HandleStrings.h"
#include <windows.globalization.h>

#pragma comment(lib, "runtimeobject")

using Microsoft::WRL::ComPtr;
using namespace ABI::Windows::Globalization;

int main()
{
	HR(RoInitialize(RO_INIT_MULTITHREADED));

	StringReference s(RuntimeClass_Windows_Globalization_Calendar);

}