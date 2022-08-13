
// soroMfcExSplit.h : main header file for the soroMfcExSplit application
//
#pragma once

#ifndef __AFXWIN_H__
	#error "include 'pch.h' before including this file for PCH"
#endif

#include "resource.h"       // main symbols


// CsoroMfcExSplitApp:
// See soroMfcExSplit.cpp for the implementation of this class
//

class CsoroMfcExSplitApp : public CWinApp
{
public:
	CsoroMfcExSplitApp() noexcept;


// Overrides
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// Implementation
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CsoroMfcExSplitApp theApp;
