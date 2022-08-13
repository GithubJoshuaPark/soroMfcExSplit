// CMyHtmlViewForUp.cpp : implementation file
//

#include "pch.h"
#include "soroMfcExSplit.h"
#include "CMyHtmlViewForUp.h"


// CMyHtmlViewForUp

IMPLEMENT_DYNCREATE(CMyHtmlViewForUp, CHtmlView)

CMyHtmlViewForUp::CMyHtmlViewForUp()
{

}

CMyHtmlViewForUp::~CMyHtmlViewForUp()
{
}

void CMyHtmlViewForUp::DoDataExchange(CDataExchange* pDX)
{
	CHtmlView::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CMyHtmlViewForUp, CHtmlView)
END_MESSAGE_MAP()


// CMyHtmlViewForUp diagnostics

#ifdef _DEBUG
void CMyHtmlViewForUp::AssertValid() const
{
	CHtmlView::AssertValid();
}

void CMyHtmlViewForUp::Dump(CDumpContext& dc) const
{
	CHtmlView::Dump(dc);
}
#endif //_DEBUG


// CMyHtmlViewForUp message handlers


void CMyHtmlViewForUp::OnInitialUpdate()
{
	CHtmlView::OnInitialUpdate();
	
	// TODO: Add your specialized code here and/or call the base class
	Navigate2(_T("C:\\"), NULL, NULL);
}


void CMyHtmlViewForUp::PostNcDestroy()
{
	// TODO: Add your specialized code here and/or call the base class
	
	CHtmlView::PostNcDestroy();
}
