
// MainFrm.cpp : implementation of the CMainFrame class
//

#include "pch.h"
#include "framework.h"
#include "soroMfcExSplit.h"

#include "MainFrm.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

// CMainFrame

IMPLEMENT_DYNCREATE(CMainFrame, CFrameWnd)

BEGIN_MESSAGE_MAP(CMainFrame, CFrameWnd)
	ON_WM_CREATE()
END_MESSAGE_MAP()

static UINT indicators[] =
{
	ID_SEPARATOR,           // status line indicator
	ID_INDICATOR_CAPS,
	ID_INDICATOR_NUM,
	ID_INDICATOR_SCRL,
};

// CMainFrame construction/destruction

CMainFrame::CMainFrame() noexcept
{
	// TODO: add member initialization code here
}

CMainFrame::~CMainFrame()
{
}

int CMainFrame::OnCreate(LPCREATESTRUCT lpCreateStruct)
{
	if (CFrameWnd::OnCreate(lpCreateStruct) == -1)
		return -1;

	if (!m_wndToolBar.CreateEx(this, TBSTYLE_FLAT, WS_CHILD | WS_VISIBLE | CBRS_TOP | CBRS_GRIPPER | CBRS_TOOLTIPS | CBRS_FLYBY | CBRS_SIZE_DYNAMIC) ||
		!m_wndToolBar.LoadToolBar(IDR_MAINFRAME))
	{
		TRACE0("Failed to create toolbar\n");
		return -1;      // fail to create
	}

	if (!m_wndStatusBar.Create(this))
	{
		TRACE0("Failed to create status bar\n");
		return -1;      // fail to create
	}
	m_wndStatusBar.SetIndicators(indicators, sizeof(indicators)/sizeof(UINT));

	// TODO: Delete these three lines if you don't want the toolbar to be dockable
	m_wndToolBar.EnableDocking(CBRS_ALIGN_ANY);
	EnableDocking(CBRS_ALIGN_ANY);
	DockControlBar(&m_wndToolBar);


	return 0;
}

BOOL CMainFrame::PreCreateWindow(CREATESTRUCT& cs)
{
	if( !CFrameWnd::PreCreateWindow(cs) )
		return FALSE;
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return TRUE;
}

// CMainFrame diagnostics

#ifdef _DEBUG
void CMainFrame::AssertValid() const
{
	CFrameWnd::AssertValid();
}

void CMainFrame::Dump(CDumpContext& dc) const
{
	CFrameWnd::Dump(dc);
}
#endif //_DEBUG


// CMainFrame message handlers



BOOL CMainFrame::OnCreateClient(LPCREATESTRUCT lpcs, CCreateContext* pContext)
{
	// TODO: Add your specialized code here and/or call the base class
	if (!m_wndSplitterHor.CreateStatic(this, 1, 2)) {
		OutputDebugStringW(_T("』』 MainFrame::OnCreateClient CreateStatic(1,2)』』\n"));
		return FALSE;
	}

	if (!m_wndSplitterHor.CreateView(0, 0, RUNTIME_CLASS(CLeftViewForSplitter), CSize(200, 200), pContext)) {
		OutputDebugStringW(_T("』』 MainFrame::OnCreateClient Left CreateView(0,0)』』\n"));
		return FALSE;
	}

	if (!m_wndSplitterVer.CreateStatic(&m_wndSplitterHor, 2, 1, 
										WS_CHILD | WS_VISIBLE, 
									m_wndSplitterHor.IdFromRowCol(0,1))) {
		OutputDebugStringW(_T("』』 MainFrame::OnCreateClient CreateStatic(0,1)』』\n"));
		return FALSE;
	}

	if (!m_wndSplitterVer.CreateView(0, 0, RUNTIME_CLASS(CRightUpViewForSplitter), CSize(100, 300), pContext)) {
		OutputDebugStringW(_T("』』 MainFrame::OnCreateClient Right CreateView(0,0)』』\n"));
		return FALSE;
	}

	if (!m_wndSplitterVer.CreateView(1, 0, RUNTIME_CLASS(CRightDownViewForSplitter), CSize(100, 300), pContext)) {
		OutputDebugStringW(_T("』』 MainFrame::OnCreateClient Right CreateView(1,0)』』\n"));
		return FALSE;
	}


	return TRUE;
	//return CFrameWnd::OnCreateClient(lpcs, pContext);
}
