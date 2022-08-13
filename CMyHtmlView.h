#pragma once
#include <afxdhtml.h>

#define CMYHTMLVIEW 29001

#ifdef _WIN32_WCE
#error "CDHtmlDialog is not supported for Windows CE."
#endif

// CMyHtmlView dialog

class CMyHtmlView : public CDHtmlDialog
{
	DECLARE_DYNCREATE(CMyHtmlView)

public:
	CMyHtmlView(CWnd* pParent = nullptr);   // standard constructor
	virtual ~CMyHtmlView();
// Overrides
	HRESULT OnButtonOK(IHTMLElement *pElement);
	HRESULT OnButtonCancel(IHTMLElement *pElement);

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG3, IDH = 310 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	virtual BOOL OnInitDialog();

	DECLARE_MESSAGE_MAP()
	DECLARE_DHTML_EVENT_MAP()
};
