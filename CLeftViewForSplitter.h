#pragma once
#include "CMyListView.h"
#define CLEFTVIEWFORSPLITTER 20701

// CLeftViewForSplitter view

class CLeftViewForSplitter : public CView
{
	DECLARE_DYNCREATE(CLeftViewForSplitter)

protected:
	CLeftViewForSplitter();           // protected constructor used by dynamic creation
	virtual ~CLeftViewForSplitter();

public:
	virtual void OnDraw(CDC* pDC);      // overridden to draw this view
#ifdef _DEBUG
	virtual void AssertValid() const;
#ifndef _WIN32_WCE
	virtual void Dump(CDumpContext& dc) const;
#endif
#endif

	CMyListView mwndCMyListView;

protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
	afx_msg void OnSize(UINT nType, int cx, int cy);
};


