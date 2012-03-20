// MSDNForumHelper.h : Declaration of the CMSDNForumHelper

#pragma once
#include "resource.h"       // main symbols

#include "MSDNForumBrowserHelper.h"


#if defined(_WIN32_WCE) && !defined(_CE_DCOM) && !defined(_CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA)
#error "Single-threaded COM objects are not properly supported on Windows CE platform, such as the Windows Mobile platforms that do not include full DCOM support. Define _CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA to force ATL to support creating single-thread COM object's and allow use of it's single-threaded COM object implementations. The threading model in your rgs file was set to 'Free' as that is the only threading model supported in non DCOM Windows CE platforms."
#endif



// CMSDNForumHelper

class ATL_NO_VTABLE CMSDNForumHelper :
	public CComObjectRootEx<CComSingleThreadModel>,
	public CComCoClass<CMSDNForumHelper, &CLSID_MSDNForumHelper>,
	public IObjectWithSiteImpl<CMSDNForumHelper>,
	public IDispatchImpl<IMSDNForumHelper, &IID_IMSDNForumHelper, &LIBID_MSDNForumBrowserHelperLib, /*wMajor =*/ 1, /*wMinor =*/ 0>,
    public IDispEventImpl<1, CMSDNForumHelper, &DIID_DWebBrowserEvents2, &LIBID_SHDocVw, 1, 1>


{
public:
	CMSDNForumHelper()
	{
	}

DECLARE_REGISTRY_RESOURCEID(IDR_MSDNFORUMHELPER)

DECLARE_NOT_AGGREGATABLE(CMSDNForumHelper)

BEGIN_COM_MAP(CMSDNForumHelper)
	COM_INTERFACE_ENTRY(IMSDNForumHelper)
	COM_INTERFACE_ENTRY(IDispatch)
	COM_INTERFACE_ENTRY(IObjectWithSite)
END_COM_MAP()


BEGIN_SINK_MAP(CMSDNForumHelper)
    SINK_ENTRY_EX(1, DIID_DWebBrowserEvents2, DISPID_DOCUMENTCOMPLETE, OnDocumentComplete)
END_SINK_MAP()



	DECLARE_PROTECT_FINAL_CONSTRUCT()

	HRESULT FinalConstruct()
	{
		return S_OK;
	}

	void FinalRelease()
	{
	}

public:
	STDMETHOD(SetSite)(IUnknown *pUnkSite);
	// DWebBrowserEvents2
    void STDMETHODCALLTYPE OnDocumentComplete(IDispatch *pDisp, VARIANT *pvarURL); 

private:
    CComPtr<IWebBrowser2>  m_spWebBrowser;
	BOOL m_fAdvised; 
    void RevealHiddenLinks(IHTMLDocument2 *pDocument);


};

OBJECT_ENTRY_AUTO(__uuidof(MSDNForumHelper), CMSDNForumHelper)
