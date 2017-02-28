#include "Precompiled.h"
#include <roapi.h>
#include <wrl.h>
#include "HandleStrings.h"
#include <windows.globalization.h>

#pragma comment(lib, "runtimeobject")

using Microsoft::WRL::ComPtr;
using namespace ABI::Windows::Globalization;

template <typename Interface, unsigned Count>
ComPtr<Interface> ActivateDetailedInstance(wchar_t const (&name)[Count])
{
	StringReference const string(name);

	// factory is used to lookup class info
	ComPtr<IActivationFactory> factory;

	HR(RoGetActivationFactory(
		string.Get(),
		__uuidof(factory),
		reinterpret_cast<void **>(factory.GetAddressOf())));

	// at this point component's dll is loaded into memory

	ComPtr<IInspectable> inspectable;
	
	// we don't neet RoActivateInstance anymore we can use the factory
	//HR(RoActivateInstance(string.Get(),
	//	inspectable.GetAddressOf()));
	HR(factory->ActivateInstance(inspectable.GetAddressOf()));


	ComPtr<Interface> result;
	HR(inspectable.As(&result));

	return result;
}

template <typename Interface, unsigned Count>
ComPtr<Interface> ActivateInstance(wchar_t const (&name)[Count])
{
	StringReference const string(name);
	ComPtr<IInspectable> inspectable;
	HR(RoActivateInstance(string.Get(),
		inspectable.GetAddressOf()));

	ComPtr<Interface> result;
	HR(inspectable.As(&result));

	return result;
}

int main()
{
	HR(RoInitialize(RO_INIT_MULTITHREADED));

	ComPtr<ICalendar> calendar = ActivateInstance<ICalendar>(RuntimeClass_Windows_Globalization_Calendar);

	//not needed when using template from above
	//StringReference s(RuntimeClass_Windows_Globalization_Calendar);

	//ComPtr<IInspectable> inspectable;
	//HR(RoActivateInstance(s.Get(),
	//	inspectable.GetAddressOf()));

	//ComPtr<ICalendar> calendar;
	//HR(inspectable.As(&calendar));

	int year = 0;
	HR(calendar->get_Year(&year));
	
	String month;
	HR(calendar->MonthAsFullSoloString(month.GetAddressOf()));

	TRACEW(Buffer(month));

}