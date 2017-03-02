

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.01.0620 */
/* at Mon Jan 18 22:14:07 2038
 */
/* Compiler settings for C:\Users\dngoins\AppData\Local\Temp\Component.idl-09133fcd:
    Oicf, W1, Zp8, env=Win32 (32b run), target_arch=X86 8.01.0620 
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */

#pragma warning( disable: 4049 )  /* more than 64k source lines */


/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif /* __RPCNDR_H_VERSION__ */

#ifndef COM_NO_WINDOWS_H
#include "windows.h"
#include "ole2.h"
#endif /*COM_NO_WINDOWS_H*/

#ifndef __Component_h__
#define __Component_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef ____x_ABI_CComponent_CICluckHandler_FWD_DEFINED__
#define ____x_ABI_CComponent_CICluckHandler_FWD_DEFINED__
typedef interface __x_ABI_CComponent_CICluckHandler __x_ABI_CComponent_CICluckHandler;

#ifdef __cplusplus
namespace ABI {
    namespace Component {
        interface ICluckHandler;
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CComponent_CICluckHandler_FWD_DEFINED__ */


#ifndef ____FITypedEventHandler_2_Component__CHen_int_FWD_DEFINED__
#define ____FITypedEventHandler_2_Component__CHen_int_FWD_DEFINED__
typedef interface __FITypedEventHandler_2_Component__CHen_int __FITypedEventHandler_2_Component__CHen_int;

#endif 	/* ____FITypedEventHandler_2_Component__CHen_int_FWD_DEFINED__ */


#ifndef ____x_ABI_CComponent_CIHen_FWD_DEFINED__
#define ____x_ABI_CComponent_CIHen_FWD_DEFINED__
typedef interface __x_ABI_CComponent_CIHen __x_ABI_CComponent_CIHen;

#ifdef __cplusplus
namespace ABI {
    namespace Component {
        interface IHen;
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CComponent_CIHen_FWD_DEFINED__ */


#ifndef ____x_ABI_CComponent_CIHenFactory_FWD_DEFINED__
#define ____x_ABI_CComponent_CIHenFactory_FWD_DEFINED__
typedef interface __x_ABI_CComponent_CIHenFactory __x_ABI_CComponent_CIHenFactory;

#ifdef __cplusplus
namespace ABI {
    namespace Component {
        interface IHenFactory;
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CComponent_CIHenFactory_FWD_DEFINED__ */


#ifndef ____x_ABI_CComponent_CIHenStatics_FWD_DEFINED__
#define ____x_ABI_CComponent_CIHenStatics_FWD_DEFINED__
typedef interface __x_ABI_CComponent_CIHenStatics __x_ABI_CComponent_CIHenStatics;

#ifdef __cplusplus
namespace ABI {
    namespace Component {
        interface IHenStatics;
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CComponent_CIHenStatics_FWD_DEFINED__ */


#ifndef ____x_ABI_CComponent_CILayer_FWD_DEFINED__
#define ____x_ABI_CComponent_CILayer_FWD_DEFINED__
typedef interface __x_ABI_CComponent_CILayer __x_ABI_CComponent_CILayer;

#ifdef __cplusplus
namespace ABI {
    namespace Component {
        interface ILayer;
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CComponent_CILayer_FWD_DEFINED__ */


/* header files for imported files */
#include "inspectable.h"
#include "windows.ui.core.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_Component_0000_0000 */
/* [local] */ 

#ifdef __cplusplus
} /*extern "C"*/ 
#endif
#include <windows.foundation.collections.h>
#ifdef __cplusplus
extern "C" {
#endif
#ifdef __cplusplus
namespace ABI {
namespace Component {
class Hen;
} /*Component*/
}
#endif

#ifdef __cplusplus
namespace ABI {
namespace Component {
interface IHen;
} /*Component*/
}
#endif


/* interface __MIDL_itf_Component_0000_0000 */
/* [local] */ 




extern RPC_IF_HANDLE __MIDL_itf_Component_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Component_0000_0000_v0_0_s_ifspec;

/* interface __MIDL_itf_Component2Eidl_0000_3106 */




/* interface __MIDL_itf_Component2Eidl_0000_3106 */




extern RPC_IF_HANDLE __MIDL_itf_Component2Eidl_0000_3106_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Component2Eidl_0000_3106_v0_0_s_ifspec;

/* interface __MIDL_itf_Component_0000_0001 */
/* [local] */ 

#ifndef DEF___FITypedEventHandler_2_Component__CHen_int_USE
#define DEF___FITypedEventHandler_2_Component__CHen_int_USE
#if defined(__cplusplus) && !defined(RO_NO_TEMPLATE_NAME)
} /*extern "C"*/ 
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("e39632f4-98ed-5860-bfdc-b990dddf1a3e"))
ITypedEventHandler<ABI::Component::Hen*,int> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Component::Hen*, ABI::Component::IHen*>,int> {
static const wchar_t* z_get_rc_name_impl() {
return L"Windows.Foundation.TypedEventHandler`2<Component.Hen, Int32>"; }
};
typedef ITypedEventHandler<ABI::Component::Hen*,int> __FITypedEventHandler_2_Component__CHen_int_t;
#define ____FITypedEventHandler_2_Component__CHen_int_FWD_DEFINED__
#define __FITypedEventHandler_2_Component__CHen_int ABI::Windows::Foundation::__FITypedEventHandler_2_Component__CHen_int_t

/* ABI */ } /* Windows */ } /* Foundation */ }
extern "C" {
#endif //__cplusplus
#endif /* DEF___FITypedEventHandler_2_Component__CHen_int_USE */


/* interface __MIDL_itf_Component_0000_0001 */
/* [local] */ 




extern RPC_IF_HANDLE __MIDL_itf_Component_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Component_0000_0001_v0_0_s_ifspec;

/* interface __MIDL_itf_Component2Eidl_0000_3107 */




/* interface __MIDL_itf_Component2Eidl_0000_3107 */




extern RPC_IF_HANDLE __MIDL_itf_Component2Eidl_0000_3107_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Component2Eidl_0000_3107_v0_0_s_ifspec;

/* interface __MIDL_itf_Component_0000_0002 */
/* [local] */ 

#ifndef DEF___FIIterator_1_HSTRING_USE
#define DEF___FIIterator_1_HSTRING_USE
#if defined(__cplusplus) && !defined(RO_NO_TEMPLATE_NAME)
} /*extern "C"*/ 
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("8c304ebb-6615-50a4-8829-879ecd443236"))
IIterator<HSTRING> : IIterator_impl<HSTRING> {
static const wchar_t* z_get_rc_name_impl() {
return L"Windows.Foundation.Collections.IIterator`1<String>"; }
};
typedef IIterator<HSTRING> __FIIterator_1_HSTRING_t;
#define ____FIIterator_1_HSTRING_FWD_DEFINED__
#define __FIIterator_1_HSTRING ABI::Windows::Foundation::Collections::__FIIterator_1_HSTRING_t

/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }
extern "C" {
#endif //__cplusplus
#endif /* DEF___FIIterator_1_HSTRING_USE */


/* interface __MIDL_itf_Component_0000_0002 */
/* [local] */ 




extern RPC_IF_HANDLE __MIDL_itf_Component_0000_0002_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Component_0000_0002_v0_0_s_ifspec;

/* interface __MIDL_itf_Component2Eidl_0000_3108 */




/* interface __MIDL_itf_Component2Eidl_0000_3108 */




extern RPC_IF_HANDLE __MIDL_itf_Component2Eidl_0000_3108_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Component2Eidl_0000_3108_v0_0_s_ifspec;

/* interface __MIDL_itf_Component_0000_0003 */
/* [local] */ 

#ifndef DEF___FIIterable_1_HSTRING_USE
#define DEF___FIIterable_1_HSTRING_USE
#if defined(__cplusplus) && !defined(RO_NO_TEMPLATE_NAME)
} /*extern "C"*/ 
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("e2fcc7c1-3bfc-5a0b-b2b0-72e769d1cb7e"))
IIterable<HSTRING> : IIterable_impl<HSTRING> {
static const wchar_t* z_get_rc_name_impl() {
return L"Windows.Foundation.Collections.IIterable`1<String>"; }
};
typedef IIterable<HSTRING> __FIIterable_1_HSTRING_t;
#define ____FIIterable_1_HSTRING_FWD_DEFINED__
#define __FIIterable_1_HSTRING ABI::Windows::Foundation::Collections::__FIIterable_1_HSTRING_t

/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }
extern "C" {
#endif //__cplusplus
#endif /* DEF___FIIterable_1_HSTRING_USE */


/* interface __MIDL_itf_Component_0000_0003 */
/* [local] */ 




extern RPC_IF_HANDLE __MIDL_itf_Component_0000_0003_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Component_0000_0003_v0_0_s_ifspec;

/* interface __MIDL_itf_Component2Eidl_0000_3109 */




/* interface __MIDL_itf_Component2Eidl_0000_3109 */




extern RPC_IF_HANDLE __MIDL_itf_Component2Eidl_0000_3109_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Component2Eidl_0000_3109_v0_0_s_ifspec;

/* interface __MIDL_itf_Component_0000_0004 */
/* [local] */ 

#ifndef DEF___FIVectorView_1_HSTRING_USE
#define DEF___FIVectorView_1_HSTRING_USE
#if defined(__cplusplus) && !defined(RO_NO_TEMPLATE_NAME)
} /*extern "C"*/ 
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("2f13c006-a03a-5f69-b090-75a43e33423e"))
IVectorView<HSTRING> : IVectorView_impl<HSTRING> {
static const wchar_t* z_get_rc_name_impl() {
return L"Windows.Foundation.Collections.IVectorView`1<String>"; }
};
typedef IVectorView<HSTRING> __FIVectorView_1_HSTRING_t;
#define ____FIVectorView_1_HSTRING_FWD_DEFINED__
#define __FIVectorView_1_HSTRING ABI::Windows::Foundation::Collections::__FIVectorView_1_HSTRING_t

/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }
extern "C" {
#endif //__cplusplus
#endif /* DEF___FIVectorView_1_HSTRING_USE */


/* interface __MIDL_itf_Component_0000_0004 */
/* [local] */ 




extern RPC_IF_HANDLE __MIDL_itf_Component_0000_0004_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Component_0000_0004_v0_0_s_ifspec;

#ifndef ____x_ABI_CComponent_CICluckHandler_INTERFACE_DEFINED__
#define ____x_ABI_CComponent_CICluckHandler_INTERFACE_DEFINED__

/* interface __x_ABI_CComponent_CICluckHandler */
/* [uuid][object] */ 



/* interface ABI::Component::ICluckHandler */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CComponent_CICluckHandler;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Component {
            
            MIDL_INTERFACE("2b4fca62-b5a5-4d25-aa5d-6ed74ea97ece")
            ICluckHandler : public IUnknown
            {
            public:
                virtual HRESULT STDMETHODCALLTYPE Invoke( 
                    /* [in] */ ABI::Component::IHen *sender,
                    /* [in] */ int args) = 0;
                
            };

            extern const __declspec(selectany) IID & IID_ICluckHandler = __uuidof(ICluckHandler);

            
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CComponent_CICluckHandlerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __x_ABI_CComponent_CICluckHandler * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __x_ABI_CComponent_CICluckHandler * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __x_ABI_CComponent_CICluckHandler * This);
        
        HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            __x_ABI_CComponent_CICluckHandler * This,
            /* [in] */ __x_ABI_CComponent_CIHen *sender,
            /* [in] */ int args);
        
        END_INTERFACE
    } __x_ABI_CComponent_CICluckHandlerVtbl;

    interface __x_ABI_CComponent_CICluckHandler
    {
        CONST_VTBL struct __x_ABI_CComponent_CICluckHandlerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CComponent_CICluckHandler_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CComponent_CICluckHandler_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CComponent_CICluckHandler_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CComponent_CICluckHandler_Invoke(This,sender,args)	\
    ( (This)->lpVtbl -> Invoke(This,sender,args) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CComponent_CICluckHandler_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_Component2Eidl_0000_3110 */




/* interface __MIDL_itf_Component2Eidl_0000_3110 */




extern RPC_IF_HANDLE __MIDL_itf_Component2Eidl_0000_3110_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Component2Eidl_0000_3110_v0_0_s_ifspec;

/* interface __MIDL_itf_Component_0000_0006 */
/* [local] */ 

#ifndef DEF___FITypedEventHandler_2_Component__CHen_int
#define DEF___FITypedEventHandler_2_Component__CHen_int
#if !defined(__cplusplus) || defined(RO_NO_TEMPLATE_NAME)


/* interface __MIDL_itf_Component_0000_0006 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_Component_0000_0006_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Component_0000_0006_v0_0_s_ifspec;

#ifndef ____FITypedEventHandler_2_Component__CHen_int_INTERFACE_DEFINED__
#define ____FITypedEventHandler_2_Component__CHen_int_INTERFACE_DEFINED__

/* interface __FITypedEventHandler_2_Component__CHen_int */
/* [unique][uuid][object] */ 



/* interface __FITypedEventHandler_2_Component__CHen_int */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID___FITypedEventHandler_2_Component__CHen_int;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("e39632f4-98ed-5860-bfdc-b990dddf1a3e")
    __FITypedEventHandler_2_Component__CHen_int : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Invoke( 
            /* [in] */ ABI::Component::IHen *sender,
            /* [in] */ int e) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct __FITypedEventHandler_2_Component__CHen_intVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __FITypedEventHandler_2_Component__CHen_int * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __FITypedEventHandler_2_Component__CHen_int * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __FITypedEventHandler_2_Component__CHen_int * This);
        
        HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            __FITypedEventHandler_2_Component__CHen_int * This,
            /* [in] */ __x_ABI_CComponent_CIHen *sender,
            /* [in] */ int e);
        
        END_INTERFACE
    } __FITypedEventHandler_2_Component__CHen_intVtbl;

    interface __FITypedEventHandler_2_Component__CHen_int
    {
        CONST_VTBL struct __FITypedEventHandler_2_Component__CHen_intVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __FITypedEventHandler_2_Component__CHen_int_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Component__CHen_int_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Component__CHen_int_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Component__CHen_int_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____FITypedEventHandler_2_Component__CHen_int_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_Component_0000_0007 */
/* [local] */ 

#endif /* pinterface */
#endif /* DEF___FITypedEventHandler_2_Component__CHen_int */
#if !defined(____x_ABI_CComponent_CIHen_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Component_IHen[] = L"Component.IHen";
#endif /* !defined(____x_ABI_CComponent_CIHen_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_Component_0000_0007 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_Component_0000_0007_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Component_0000_0007_v0_0_s_ifspec;

#ifndef ____x_ABI_CComponent_CIHen_INTERFACE_DEFINED__
#define ____x_ABI_CComponent_CIHen_INTERFACE_DEFINED__

/* interface __x_ABI_CComponent_CIHen */
/* [uuid][object] */ 



/* interface ABI::Component::IHen */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CComponent_CIHen;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Component {
            
            MIDL_INTERFACE("710e2d1f-5382-498f-ba8c-33144ae16bc9")
            IHen : public IInspectable
            {
            public:
                virtual HRESULT STDMETHODCALLTYPE Cluck( 
                    /* [in] */ ABI::Component::ICluckHandler *handler) = 0;
                
                virtual HRESULT STDMETHODCALLTYPE Clucking( void) = 0;
                
                virtual HRESULT STDMETHODCALLTYPE add_Clucked( 
                    /* [in] */ ABI::Component::ICluckHandler *handler,
                    /* [out][retval] */ EventRegistrationToken *token) = 0;
                
                virtual HRESULT STDMETHODCALLTYPE remove_Clucked( 
                    /* [in] */ EventRegistrationToken token) = 0;
                
                virtual HRESULT STDMETHODCALLTYPE add_GenericClucked( 
                    /* [in] */ __FITypedEventHandler_2_Component__CHen_int *handler,
                    /* [out][retval] */ EventRegistrationToken *token) = 0;
                
                virtual HRESULT STDMETHODCALLTYPE remove_GenericClucked( 
                    /* [in] */ EventRegistrationToken token) = 0;
                
                virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Brood( 
                    /* [out][retval] */ __FIVectorView_1_HSTRING **brood) = 0;
                
            };

            extern const __declspec(selectany) IID & IID_IHen = __uuidof(IHen);

            
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CComponent_CIHenVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __x_ABI_CComponent_CIHen * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __x_ABI_CComponent_CIHen * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __x_ABI_CComponent_CIHen * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __x_ABI_CComponent_CIHen * This,
            /* [out] */ ULONG *iidCount,
            /* [size_is][size_is][out] */ IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __x_ABI_CComponent_CIHen * This,
            /* [out] */ HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __x_ABI_CComponent_CIHen * This,
            /* [out] */ TrustLevel *trustLevel);
        
        HRESULT ( STDMETHODCALLTYPE *Cluck )( 
            __x_ABI_CComponent_CIHen * This,
            /* [in] */ __x_ABI_CComponent_CICluckHandler *handler);
        
        HRESULT ( STDMETHODCALLTYPE *Clucking )( 
            __x_ABI_CComponent_CIHen * This);
        
        HRESULT ( STDMETHODCALLTYPE *add_Clucked )( 
            __x_ABI_CComponent_CIHen * This,
            /* [in] */ __x_ABI_CComponent_CICluckHandler *handler,
            /* [out][retval] */ EventRegistrationToken *token);
        
        HRESULT ( STDMETHODCALLTYPE *remove_Clucked )( 
            __x_ABI_CComponent_CIHen * This,
            /* [in] */ EventRegistrationToken token);
        
        HRESULT ( STDMETHODCALLTYPE *add_GenericClucked )( 
            __x_ABI_CComponent_CIHen * This,
            /* [in] */ __FITypedEventHandler_2_Component__CHen_int *handler,
            /* [out][retval] */ EventRegistrationToken *token);
        
        HRESULT ( STDMETHODCALLTYPE *remove_GenericClucked )( 
            __x_ABI_CComponent_CIHen * This,
            /* [in] */ EventRegistrationToken token);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Brood )( 
            __x_ABI_CComponent_CIHen * This,
            /* [out][retval] */ __FIVectorView_1_HSTRING **brood);
        
        END_INTERFACE
    } __x_ABI_CComponent_CIHenVtbl;

    interface __x_ABI_CComponent_CIHen
    {
        CONST_VTBL struct __x_ABI_CComponent_CIHenVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CComponent_CIHen_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CComponent_CIHen_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CComponent_CIHen_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CComponent_CIHen_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CComponent_CIHen_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CComponent_CIHen_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CComponent_CIHen_Cluck(This,handler)	\
    ( (This)->lpVtbl -> Cluck(This,handler) ) 

#define __x_ABI_CComponent_CIHen_Clucking(This)	\
    ( (This)->lpVtbl -> Clucking(This) ) 

#define __x_ABI_CComponent_CIHen_add_Clucked(This,handler,token)	\
    ( (This)->lpVtbl -> add_Clucked(This,handler,token) ) 

#define __x_ABI_CComponent_CIHen_remove_Clucked(This,token)	\
    ( (This)->lpVtbl -> remove_Clucked(This,token) ) 

#define __x_ABI_CComponent_CIHen_add_GenericClucked(This,handler,token)	\
    ( (This)->lpVtbl -> add_GenericClucked(This,handler,token) ) 

#define __x_ABI_CComponent_CIHen_remove_GenericClucked(This,token)	\
    ( (This)->lpVtbl -> remove_GenericClucked(This,token) ) 

#define __x_ABI_CComponent_CIHen_get_Brood(This,brood)	\
    ( (This)->lpVtbl -> get_Brood(This,brood) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CComponent_CIHen_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_Component_0000_0008 */
/* [local] */ 

#if !defined(____x_ABI_CComponent_CIHenFactory_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Component_IHenFactory[] = L"Component.IHenFactory";
#endif /* !defined(____x_ABI_CComponent_CIHenFactory_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_Component_0000_0008 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_Component_0000_0008_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Component_0000_0008_v0_0_s_ifspec;

#ifndef ____x_ABI_CComponent_CIHenFactory_INTERFACE_DEFINED__
#define ____x_ABI_CComponent_CIHenFactory_INTERFACE_DEFINED__

/* interface __x_ABI_CComponent_CIHenFactory */
/* [uuid][object] */ 



/* interface ABI::Component::IHenFactory */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CComponent_CIHenFactory;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Component {
            
            MIDL_INTERFACE("86d68e2e-b05a-4d69-b642-490827eaa726")
            IHenFactory : public IInspectable
            {
            public:
                virtual HRESULT STDMETHODCALLTYPE CreateHen( 
                    /* [in] */ INT32 eggs,
                    /* [out][retval] */ ABI::Component::IHen **instance) = 0;
                
            };

            extern const __declspec(selectany) IID & IID_IHenFactory = __uuidof(IHenFactory);

            
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CComponent_CIHenFactoryVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __x_ABI_CComponent_CIHenFactory * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __x_ABI_CComponent_CIHenFactory * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __x_ABI_CComponent_CIHenFactory * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __x_ABI_CComponent_CIHenFactory * This,
            /* [out] */ ULONG *iidCount,
            /* [size_is][size_is][out] */ IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __x_ABI_CComponent_CIHenFactory * This,
            /* [out] */ HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __x_ABI_CComponent_CIHenFactory * This,
            /* [out] */ TrustLevel *trustLevel);
        
        HRESULT ( STDMETHODCALLTYPE *CreateHen )( 
            __x_ABI_CComponent_CIHenFactory * This,
            /* [in] */ INT32 eggs,
            /* [out][retval] */ __x_ABI_CComponent_CIHen **instance);
        
        END_INTERFACE
    } __x_ABI_CComponent_CIHenFactoryVtbl;

    interface __x_ABI_CComponent_CIHenFactory
    {
        CONST_VTBL struct __x_ABI_CComponent_CIHenFactoryVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CComponent_CIHenFactory_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CComponent_CIHenFactory_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CComponent_CIHenFactory_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CComponent_CIHenFactory_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CComponent_CIHenFactory_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CComponent_CIHenFactory_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CComponent_CIHenFactory_CreateHen(This,eggs,instance)	\
    ( (This)->lpVtbl -> CreateHen(This,eggs,instance) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CComponent_CIHenFactory_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_Component_0000_0009 */
/* [local] */ 

#if !defined(____x_ABI_CComponent_CIHenStatics_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Component_IHenStatics[] = L"Component.IHenStatics";
#endif /* !defined(____x_ABI_CComponent_CIHenStatics_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_Component_0000_0009 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_Component_0000_0009_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Component_0000_0009_v0_0_s_ifspec;

#ifndef ____x_ABI_CComponent_CIHenStatics_INTERFACE_DEFINED__
#define ____x_ABI_CComponent_CIHenStatics_INTERFACE_DEFINED__

/* interface __x_ABI_CComponent_CIHenStatics */
/* [uuid][object] */ 



/* interface ABI::Component::IHenStatics */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CComponent_CIHenStatics;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Component {
            
            MIDL_INTERFACE("e704abbb-dfdb-4e52-a0d8-5d4033b90ef0")
            IHenStatics : public IInspectable
            {
            public:
                virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Layers( 
                    /* [out][retval] */ INT32 *value) = 0;
                
            };

            extern const __declspec(selectany) IID & IID_IHenStatics = __uuidof(IHenStatics);

            
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CComponent_CIHenStaticsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __x_ABI_CComponent_CIHenStatics * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __x_ABI_CComponent_CIHenStatics * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __x_ABI_CComponent_CIHenStatics * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __x_ABI_CComponent_CIHenStatics * This,
            /* [out] */ ULONG *iidCount,
            /* [size_is][size_is][out] */ IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __x_ABI_CComponent_CIHenStatics * This,
            /* [out] */ HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __x_ABI_CComponent_CIHenStatics * This,
            /* [out] */ TrustLevel *trustLevel);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Layers )( 
            __x_ABI_CComponent_CIHenStatics * This,
            /* [out][retval] */ INT32 *value);
        
        END_INTERFACE
    } __x_ABI_CComponent_CIHenStaticsVtbl;

    interface __x_ABI_CComponent_CIHenStatics
    {
        CONST_VTBL struct __x_ABI_CComponent_CIHenStaticsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CComponent_CIHenStatics_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CComponent_CIHenStatics_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CComponent_CIHenStatics_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CComponent_CIHenStatics_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CComponent_CIHenStatics_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CComponent_CIHenStatics_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CComponent_CIHenStatics_get_Layers(This,value)	\
    ( (This)->lpVtbl -> get_Layers(This,value) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CComponent_CIHenStatics_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_Component_0000_0010 */
/* [local] */ 

#if !defined(____x_ABI_CComponent_CILayer_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Component_ILayer[] = L"Component.ILayer";
#endif /* !defined(____x_ABI_CComponent_CILayer_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_Component_0000_0010 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_Component_0000_0010_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Component_0000_0010_v0_0_s_ifspec;

#ifndef ____x_ABI_CComponent_CILayer_INTERFACE_DEFINED__
#define ____x_ABI_CComponent_CILayer_INTERFACE_DEFINED__

/* interface __x_ABI_CComponent_CILayer */
/* [uuid][object] */ 



/* interface ABI::Component::ILayer */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CComponent_CILayer;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Component {
            
            MIDL_INTERFACE("BB1AF9FE-D9D3-41F7-B1EA-F5AC77622911")
            ILayer : public IInspectable
            {
            public:
                virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Eggs( 
                    /* [out][retval] */ INT32 *value) = 0;
                
            };

            extern const __declspec(selectany) IID & IID_ILayer = __uuidof(ILayer);

            
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CComponent_CILayerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __x_ABI_CComponent_CILayer * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __x_ABI_CComponent_CILayer * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __x_ABI_CComponent_CILayer * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __x_ABI_CComponent_CILayer * This,
            /* [out] */ ULONG *iidCount,
            /* [size_is][size_is][out] */ IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __x_ABI_CComponent_CILayer * This,
            /* [out] */ HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __x_ABI_CComponent_CILayer * This,
            /* [out] */ TrustLevel *trustLevel);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Eggs )( 
            __x_ABI_CComponent_CILayer * This,
            /* [out][retval] */ INT32 *value);
        
        END_INTERFACE
    } __x_ABI_CComponent_CILayerVtbl;

    interface __x_ABI_CComponent_CILayer
    {
        CONST_VTBL struct __x_ABI_CComponent_CILayerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CComponent_CILayer_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CComponent_CILayer_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CComponent_CILayer_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CComponent_CILayer_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CComponent_CILayer_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CComponent_CILayer_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CComponent_CILayer_get_Eggs(This,value)	\
    ( (This)->lpVtbl -> get_Eggs(This,value) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CComponent_CILayer_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_Component_0000_0011 */
/* [local] */ 

#ifndef RUNTIMECLASS_Component_Hen_DEFINED
#define RUNTIMECLASS_Component_Hen_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Component_Hen[] = L"Component.Hen";
#endif


/* interface __MIDL_itf_Component_0000_0011 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_Component_0000_0011_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Component_0000_0011_v0_0_s_ifspec;

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


