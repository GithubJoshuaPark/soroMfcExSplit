// CMyHtmlView.cpp : implementation file
//

#include "pch.h"
#include "soroMfcExSplit.h"
#include "CMyHtmlView.h"


// CMyHtmlView dialog

IMPLEMENT_DYNCREATE(CMyHtmlView, CDHtmlDialog)

CMyHtmlView::CMyHtmlView(CWnd* pParent /*=nullptr*/)
	: CDHtmlDialog(IDD_DIALOG3, 310, pParent)
{

}

CMyHtmlView::~CMyHtmlView()
{
}

void CMyHtmlView::DoDataExchange(CDataExchange* pDX)
{
	CDHtmlDialog::DoDataExchange(pDX);
}

BOOL CMyHtmlView::OnInitDialog()
{
	CDHtmlDialog::OnInitDialog();	
	Navigate(_T("C:\\"));
	return TRUE;  // return TRUE  unless you set the focus to a control
}

BEGIN_MESSAGE_MAP(CMyHtmlView, CDHtmlDialog)
END_MESSAGE_MAP()

BEGIN_DHTML_EVENT_MAP(CMyHtmlView)
	DHTML_EVENT_ONCLICK(_T("ButtonOK"), OnButtonOK)
	DHTML_EVENT_ONCLICK(_T("ButtonCancel"), OnButtonCancel)
END_DHTML_EVENT_MAP()



// CMyHtmlView message handlers

HRESULT CMyHtmlView::OnButtonOK(IHTMLElement* /*pElement*/)
{
	OnOK();
	return S_OK;
}

HRESULT CMyHtmlView::OnButtonCancel(IHTMLElement* /*pElement*/)
{
	OnCancel();
	return S_OK;
}
