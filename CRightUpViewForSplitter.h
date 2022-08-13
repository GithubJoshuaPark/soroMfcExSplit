#pragma once

#include "CMyHtmlViewForUp.h"

#define CRIGHTUPVIEWFORSPLITTER 28110

class CRightUpViewForSplitter : public CView
{
	DECLARE_DYNCREATE(CRightUpViewForSplitter)

protected:
	CRightUpViewForSplitter();           // protected constructor used by dynamic creation
	virtual ~CRightUpViewForSplitter();
public:
	virtual void OnDraw(CDC* pDC);      // overridden to draw this view
#ifdef _DEBUG
	virtual void AssertValid() const;
#ifndef _WIN32_WCE
	virtual void Dump(CDumpContext& dc) const;
#endif
#endif

	CMyHtmlViewForUp* m_wndCMyHtmlViewForUp;

protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
	afx_msg void OnSize(UINT nType, int cx, int cy);
	virtual void PostNcDestroy();
};


