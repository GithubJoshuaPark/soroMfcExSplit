// CMyEditView.cpp : implementation file
//

#include "pch.h"
#include "soroMfcExSplit.h"
#include "CMyEditView.h"


// CMyEditView

IMPLEMENT_DYNCREATE(CMyEditView, CEditView)

CMyEditView::CMyEditView()
{

}

CMyEditView::~CMyEditView()
{
}

BEGIN_MESSAGE_MAP(CMyEditView, CEditView)
END_MESSAGE_MAP()


// CMyEditView diagnostics

#ifdef _DEBUG
void CMyEditView::AssertValid() const
{
	CEditView::AssertValid();
}

#ifndef _WIN32_WCE
void CMyEditView::Dump(CDumpContext& dc) const
{
	CEditView::Dump(dc);
}
#endif
#endif //_DEBUG


// CMyEditView message handlers


void CMyEditView::OnInitialUpdate()
{
	CEditView::OnInitialUpdate();

	// TODO: Add your specialized code here and/or call the base class

	// Get the edit control and set some initial properties for it
	CEdit& theEdit = GetEditCtrl();

	// adjust the left margin without changing the right margin
	DWORD dwMargins = theEdit.GetMargins();
	theEdit.SetMargins(20, HIWORD(dwMargins));

	// only accept 10k of text
	theEdit.SetLimitText(10 * 1024);

}
