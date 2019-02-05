// Saisie.cpp : fichier d'implémentation
//

#include "stdafx.h"
#include "TP6_M1_2017.h"
#include "Saisie.h"
#include "afxdialogex.h"


// Boîte de dialogue CSaisie

IMPLEMENT_DYNAMIC(CSaisie, CDialog)

CSaisie::CSaisie(CWnd* pParent /*=NULL*/)
	: CDialog(IDD_DIALOG_SecDeg, pParent)
	, m_a(0)
	, m_b(0)
	, m_c(0)
{

}

CSaisie::~CSaisie()
{
}

void CSaisie::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, m_a);
	DDX_Text(pDX, IDC_EDIT2, m_b);
	DDX_Text(pDX, IDC_EDIT3, m_c);
}


BEGIN_MESSAGE_MAP(CSaisie, CDialog)
END_MESSAGE_MAP()


// Gestionnaires de messages de CSaisie


double CSaisie::get_m_a()
{
	return m_a;
}


double CSaisie::get_m_b()
{
	return m_b;
}


double CSaisie::get_m_c()
{
	return m_c;
}
