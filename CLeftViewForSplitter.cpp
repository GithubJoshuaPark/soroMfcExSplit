// CLeftViewForSplitter.cpp : implementation file
//

#include "pch.h"
#include "soroMfcExSplit.h"
#include "CLeftViewForSplitter.h"


// CLeftViewForSplitter

IMPLEMENT_DYNCREATE(CLeftViewForSplitter, CView)

CLeftViewForSplitter::CLeftViewForSplitter()
{

}

CLeftViewForSplitter::~CLeftViewForSplitter()
{
}

BEGIN_MESSAGE_MAP(CLeftViewForSplitter, CView)
	ON_WM_CREATE()
	ON_WM_SIZE()
END_MESSAGE_MAP()


// CLeftViewForSplitter drawing

void CLeftViewForSplitter::OnDraw(CDC* pDC)
{
	CDocument* pDoc = GetDocument();
	// TODO: add draw code here
}


// CLeftViewForSplitter diagnostics

#ifdef _DEBUG
void CLeftViewForSplitter::AssertValid() const
{
	CView::AssertValid();
}

#ifndef _WIN32_WCE
void CLeftViewForSplitter::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}
#endif
#endif //_DEBUG


// CLeftViewForSplitter message handlers


int CLeftViewForSplitter::OnCreate(LPCREATESTRUCT lpCreateStruct)
{
	if (CView::OnCreate(lpCreateStruct) == -1)
		return -1;

	// TODO:  Add your specialized creation code here
	CRect cRect;
	GetClientRect(&cRect);

	mwndCMyListView.Create(WS_CHILD | WS_VISIBLE, cRect, this, CLEFTVIEWFORSPLITTER);

	return 0;
}


void CLeftViewForSplitter::OnSize(UINT nType, int cx, int cy)
{
	CView::OnSize(nType, cx, cy);

	// TODO: Add your message handler code here
	CString ls_str = _T("");
	ls_str.Format(_T("¡Ù¡Ú OnSize: %d, %d¡Ù¡Ú\n"), cx, cy);
	OutputDebugStringW(ls_str);

	mwndCMyListView.MoveWindow(0, 0, cx, cy);
}
