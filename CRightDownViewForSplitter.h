#pragma once

#include "CMyEditView.h"

// CRightDownViewForSplitter view

class CRightDownViewForSplitter : public CView
{
	DECLARE_DYNCREATE(CRightDownViewForSplitter)

protected:
	CRightDownViewForSplitter();           // protected constructor used by dynamic creation
	virtual ~CRightDownViewForSplitter();

public:
	virtual void OnDraw(CDC* pDC);      // overridden to draw this view
#ifdef _DEBUG
	virtual void AssertValid() const;
#ifndef _WIN32_WCE
	virtual void Dump(CDumpContext& dc) const;
#endif
#endif

	CMyEditView* m_wndCMyEditView;

protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
	afx_msg void OnSize(UINT nType, int cx, int cy);
};


