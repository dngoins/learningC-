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

	ComPtr<IInspectable> inspectable;
	HR(RoActivateInstance(s.Get(),
		inspectable.GetAddressOf()));

	ComPtr<ICalendar> calendar;
	HR(inspectable.As(&calendar));

	int year = 0;
	HR(calendar->get_Year(&year));
	
	String month;
	HR(calendar->MonthAsFullSoloString(month.GetAddressOf()));

	TRACEW(Buffer(month));

}