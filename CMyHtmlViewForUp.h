#pragma once
#include <afxhtml.h>
#define CMYHTMLVIEWFORUP 29010
#ifdef _WIN32_WCE
#error "CHtmlView is not supported for Windows CE."
#endif 

// CMyHtmlViewForUp html view

class CMyHtmlViewForUp : public CHtmlView
{
	DECLARE_DYNCREATE(CMyHtmlViewForUp)

public:
	CMyHtmlViewForUp();           // protected constructor used by dynamic creation
	virtual ~CMyHtmlViewForUp();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
public:
	virtual void OnInitialUpdate();
	virtual void PostNcDestroy();
};


