
// TP6_M1_2017.h�: fichier d'en-t�te principal pour l'application TP6_M1_2017
//
#pragma once

#ifndef __AFXWIN_H__
	#error "incluez 'stdafx.h' avant d'inclure ce fichier pour PCH"
#endif

#include "resource.h"       // symboles principaux


// CTP6_M1_2017App:
// Consultez TP6_M1_2017.cpp pour l'impl�mentation de cette classe
//

class CTP6_M1_2017App : public CWinApp
{
public:
	CTP6_M1_2017App();


// Substitutions
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// Impl�mentation
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CTP6_M1_2017App theApp;
