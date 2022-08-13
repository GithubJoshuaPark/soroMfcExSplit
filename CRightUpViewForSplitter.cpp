// CRightUpViewForSplitter.cpp : implementation file
//

#include "pch.h"
#include "soroMfcExSplit.h"
#include "CRightUpViewForSplitter.h"


// CRightUpViewForSplitter

IMPLEMENT_DYNCREATE(CRightUpViewForSplitter, CView)

CRightUpViewForSplitter::CRightUpViewForSplitter()
{

}

CRightUpViewForSplitter::~CRightUpViewForSplitter()
{
}

BEGIN_MESSAGE_MAP(CRightUpViewForSplitter, CView)
	ON_WM_CREATE()
	ON_WM_SIZE()
END_MESSAGE_MAP()


// CRightUpViewForSplitter drawing

void CRightUpViewForSplitter::OnDraw(CDC* pDC)
{
	CDocument* pDoc = GetDocument();
	// TODO: add draw code here
}


// CRightUpViewForSplitter diagnostics

#ifdef _DEBUG
void CRightUpViewForSplitter::AssertValid() const
{
	CView::AssertValid();
}

#ifndef _WIN32_WCE
void CRightUpViewForSplitter::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}
#endif
#endif //_DEBUG


// CRightUpViewForSplitter message handlers


int CRightUpViewForSplitter::OnCreate(LPCREATESTRUCT lpCreateStruct)
{
	if (CView::OnCreate(lpCreateStruct) == -1)
		return -1;

	// TODO:  Add your specialized creation code here	
	CRect cRect;
	GetClientRect(&cRect);
	m_wndCMyHtmlViewForUp = new CMyHtmlViewForUp;
	m_wndCMyHtmlViewForUp->Create(NULL, NULL, WS_CHILD | WS_VISIBLE, cRect, this, CMYHTMLVIEWFORUP);
	
	return 0;
}


void CRightUpViewForSplitter::OnSize(UINT nType, int cx, int cy)
{
	CView::OnSize(nType, cx, cy);

	// TODO: Add your message handler code here
	m_wndCMyHtmlViewForUp->MoveWindow(0, 0, cx, cy);

}


void CRightUpViewForSplitter::PostNcDestroy()
{
	// TODO: Add your specialized code here and/or call the base class

	CView::PostNcDestroy();
}
