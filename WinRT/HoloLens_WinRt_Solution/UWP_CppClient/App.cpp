#include "pch.h"

#include <roapi.h>
#include <wrl.h>
#include "HandleStrings.h"
#include <Windows.ApplicationModel.h>
#include <Windows.ApplicationModel.core.h>
#include "Implements.h"

#pragma comment(lib, "runtimeobject")

using Microsoft::WRL::ComPtr;

using namespace ABI::Windows::ApplicationModel::Core;
using namespace ABI::Windows::UI::Core;

template <typename Interface, unsigned Count>
ComPtr<Interface> GetActivationFactory(wchar_t const (&name)[Count])
{
	StringReference const string(name);

	ComPtr<Interface> factory;
	HR(RoGetActivationFactory(
		string.Get(),
		__uuidof(factory),
		reinterpret_cast<void **> (factory.GetAddressOf())));

	return factory;
}

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


class App : public Implements<IFrameworkViewSource, IFrameworkView>
{
	ComPtr<ICoreWindow> m_window;

public:
	virtual HRESULT __stdcall CreateView(IFrameworkView ** view) noexcept override
	{
		*view = this;
		(*view)->AddRef();
		return S_OK;
	}

	virtual HRESULT __stdcall SetWindow(ICoreWindow * window) noexcept override
	{
		m_window = window;
		return S_OK;
	}

	virtual HRESULT __stdcall Run() noexcept override
	{
		HRESULT hr = m_window->Activate();
		if (hr != S_OK)
		{
			return hr;
		}

		ComPtr<ICoreDispatcher> dispatcher;
		hr = m_window->get_Dispatcher(dispatcher.GetAddressOf());

		if (hr != S_OK)
			return hr;

		return dispatcher->ProcessEvents(CoreProcessEventsOption_ProcessUntilQuit);
	}

	virtual HRESULT __stdcall Initialize(ICoreApplicationView *) noexcept override
	{
		return S_OK;
	}

	virtual HRESULT __stdcall Load(HSTRING) noexcept override
	{
		return S_OK;
	}

	virtual HRESULT __stdcall Uninitialize() noexcept override
	{
		return S_OK;
	}
};

#include "..\Component\Component.h"
using namespace ABI::Component;

int __stdcall wWinMain(HINSTANCE, HINSTANCE, PWSTR, int)
{
	HR(RoInitialize(RO_INIT_MULTITHREADED));

	ComPtr<ICoreApplication> app = GetActivationFactory<ICoreApplication>(RuntimeClass_Windows_ApplicationModel_Core_CoreApplication);
	ComPtr<IFrameworkViewSource> source;
	source.Attach(new App);
	
	//Hen h(123);

	ComPtr<IHenFactory> factory = GetActivationFactory<IHenFactory>
		(RuntimeClass_Component_Hen);

	ComPtr<IHen> hen;

	HR(factory->CreateHen(123, hen.GetAddressOf()));


	//intt layers = HEN::Layers()
	//ComPtr<IHenStatics> statics =
	//GetActivationFactory<IHenStatics>(L"Component.Hen");

	//intt layers = HEN::Layers()

	ComPtr<IHenStatics> statics;
	HR(factory.As(&statics));

	int layers = 0;
	HR(statics->get_Layers(&layers));


	HR(app->Run(source.Get()));

}