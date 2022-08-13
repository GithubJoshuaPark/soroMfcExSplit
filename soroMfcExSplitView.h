
// soroMfcExSplitView.h : interface of the CsoroMfcExSplitView class
//

#pragma once


class CsoroMfcExSplitView : public CView
{
protected: // create from serialization only
	CsoroMfcExSplitView() noexcept;
	DECLARE_DYNCREATE(CsoroMfcExSplitView)

// Attributes
public:
	CsoroMfcExSplitDoc* GetDocument() const;

// Operations
public:


// Overrides
public:
	virtual void OnDraw(CDC* pDC);  // overridden to draw this view
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);

// Implementation
public:
	virtual ~CsoroMfcExSplitView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in soroMfcExSplitView.cpp
inline CsoroMfcExSplitDoc* CsoroMfcExSplitView::GetDocument() const
   { return reinterpret_cast<CsoroMfcExSplitDoc*>(m_pDocument); }
#endif

