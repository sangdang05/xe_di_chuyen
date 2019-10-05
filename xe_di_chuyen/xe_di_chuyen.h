
// xe_di_chuyen.h : main header file for the xe_di_chuyen application
//
#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"       // main symbols


// CxedichuyenApp:
// See xe_di_chuyen.cpp for the implementation of this class
//

class CxedichuyenApp : public CWinApp
{
public:
	CxedichuyenApp() noexcept;


// Overrides
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// Implementation
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CxedichuyenApp theApp;
