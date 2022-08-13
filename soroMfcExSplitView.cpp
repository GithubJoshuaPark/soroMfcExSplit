
// soroMfcExSplitView.cpp : implementation of the CsoroMfcExSplitView class
//

#include "pch.h"
#include "framework.h"
// SHARED_HANDLERS can be defined in an ATL project implementing preview, thumbnail
// and search filter handlers and allows sharing of document code with that project.
#ifndef SHARED_HANDLERS
#include "soroMfcExSplit.h"
#endif

#include "soroMfcExSplitDoc.h"
#include "soroMfcExSplitView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CsoroMfcExSplitView

IMPLEMENT_DYNCREATE(CsoroMfcExSplitView, CView)

BEGIN_MESSAGE_MAP(CsoroMfcExSplitView, CView)
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
END_MESSAGE_MAP()

// CsoroMfcExSplitView construction/destruction

CsoroMfcExSplitView::CsoroMfcExSplitView() noexcept
{
	// TODO: add construction code here

}

CsoroMfcExSplitView::~CsoroMfcExSplitView()
{
}

BOOL CsoroMfcExSplitView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

// CsoroMfcExSplitView drawing

void CsoroMfcExSplitView::OnDraw(CDC* /*pDC*/)
{
	CsoroMfcExSplitDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: add draw code for native data here
}


// CsoroMfcExSplitView printing

BOOL CsoroMfcExSplitView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void CsoroMfcExSplitView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void CsoroMfcExSplitView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}


// CsoroMfcExSplitView diagnostics

#ifdef _DEBUG
void CsoroMfcExSplitView::AssertValid() const
{
	CView::AssertValid();
}

void CsoroMfcExSplitView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CsoroMfcExSplitDoc* CsoroMfcExSplitView::GetDocument() const // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CsoroMfcExSplitDoc)));
	return (CsoroMfcExSplitDoc*)m_pDocument;
}
#endif //_DEBUG


// CsoroMfcExSplitView message handlers
