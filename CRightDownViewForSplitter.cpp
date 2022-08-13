// CRightDownViewForSplitter.cpp : implementation file
//

#include "pch.h"
#include "soroMfcExSplit.h"
#include "CRightDownViewForSplitter.h"


// CRightDownViewForSplitter

IMPLEMENT_DYNCREATE(CRightDownViewForSplitter, CView)

CRightDownViewForSplitter::CRightDownViewForSplitter()
{

}

CRightDownViewForSplitter::~CRightDownViewForSplitter()
{
}

BEGIN_MESSAGE_MAP(CRightDownViewForSplitter, CView)
	ON_WM_CREATE()
	ON_WM_SIZE()
END_MESSAGE_MAP()


// CRightDownViewForSplitter drawing

void CRightDownViewForSplitter::OnDraw(CDC* pDC)
{
	CDocument* pDoc = GetDocument();
	// TODO: add draw code here
}


// CRightDownViewForSplitter diagnostics

#ifdef _DEBUG
void CRightDownViewForSplitter::AssertValid() const
{
	CView::AssertValid();
}

#ifndef _WIN32_WCE
void CRightDownViewForSplitter::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}
#endif
#endif //_DEBUG


// CRightDownViewForSplitter message handlers


int CRightDownViewForSplitter::OnCreate(LPCREATESTRUCT lpCreateStruct)
{
	if (CView::OnCreate(lpCreateStruct) == -1)
		return -1;

	// TODO:  Add your specialized creation code here
	CRect cRect;
	GetClientRect(&cRect);
	m_wndCMyEditView = new CMyEditView;
	m_wndCMyEditView->Create(NULL, NULL, WS_CHILD | WS_VISIBLE,
		cRect, this, CMYEDITVIEW);
	return 0;
}


void CRightDownViewForSplitter::OnSize(UINT nType, int cx, int cy)
{
	CView::OnSize(nType, cx, cy);

	// TODO: Add your message handler code here
	m_wndCMyEditView->MoveWindow(0, 0, cx, cy);
}
