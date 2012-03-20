

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 7.00.0500 */
/* at Wed Jan 19 22:20:45 2011
 */
/* Compiler settings for .\MSDNForumBrowserHelper.idl:
    Oicf, W1, Zp8, env=Win32 (32b run)
    protocol : dce , ms_ext, c_ext
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
//@@MIDL_FILE_HEADING(  )

#pragma warning( disable: 4049 )  /* more than 64k source lines */


/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 440
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif // __RPCNDR_H_VERSION__

#ifndef COM_NO_WINDOWS_H
#include "windows.h"
#include "ole2.h"
#endif /*COM_NO_WINDOWS_H*/

#ifndef __MSDNForumBrowserHelper_h__
#define __MSDNForumBrowserHelper_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IMSDNForumHelper_FWD_DEFINED__
#define __IMSDNForumHelper_FWD_DEFINED__
typedef interface IMSDNForumHelper IMSDNForumHelper;
#endif 	/* __IMSDNForumHelper_FWD_DEFINED__ */


#ifndef __MSDNForumHelper_FWD_DEFINED__
#define __MSDNForumHelper_FWD_DEFINED__

#ifdef __cplusplus
typedef class MSDNForumHelper MSDNForumHelper;
#else
typedef struct MSDNForumHelper MSDNForumHelper;
#endif /* __cplusplus */

#endif 	/* __MSDNForumHelper_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"

#ifdef __cplusplus
extern "C"{
#endif 


#ifndef __IMSDNForumHelper_INTERFACE_DEFINED__
#define __IMSDNForumHelper_INTERFACE_DEFINED__

/* interface IMSDNForumHelper */
/* [unique][helpstring][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IMSDNForumHelper;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("A186BA5B-E2CB-47AE-BFC4-D49D19EEDB40")
    IMSDNForumHelper : public IDispatch
    {
    public:
    };
    
#else 	/* C style interface */

    typedef struct IMSDNForumHelperVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMSDNForumHelper * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMSDNForumHelper * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMSDNForumHelper * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IMSDNForumHelper * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IMSDNForumHelper * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IMSDNForumHelper * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IMSDNForumHelper * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        END_INTERFACE
    } IMSDNForumHelperVtbl;

    interface IMSDNForumHelper
    {
        CONST_VTBL struct IMSDNForumHelperVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMSDNForumHelper_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IMSDNForumHelper_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IMSDNForumHelper_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IMSDNForumHelper_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IMSDNForumHelper_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IMSDNForumHelper_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IMSDNForumHelper_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IMSDNForumHelper_INTERFACE_DEFINED__ */



#ifndef __MSDNForumBrowserHelperLib_LIBRARY_DEFINED__
#define __MSDNForumBrowserHelperLib_LIBRARY_DEFINED__

/* library MSDNForumBrowserHelperLib */
/* [helpstring][version][uuid] */ 


EXTERN_C const IID LIBID_MSDNForumBrowserHelperLib;

EXTERN_C const CLSID CLSID_MSDNForumHelper;

#ifdef __cplusplus

class DECLSPEC_UUID("DB8A1458-257D-421B-9668-8010498A41AF")
MSDNForumHelper;
#endif
#endif /* __MSDNForumBrowserHelperLib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


