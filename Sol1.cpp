#include "stdafx.h"
#include "Sol1.h"



CSol1::CSol1()
	: m_a(0)
	, m_b(0)
	, m_rd(0)
{
}


CSol1::~CSol1()
{
}


CSol1::CSol1(double a, double b)
{
	m_a = a; m_b = b;
	m_rd = -m_b / (2 * m_a);
}


CString CSol1::Affiche()
{
	//cout << "La solution est double et vaut : " << m_rd << endl;
	CString tex; tex = _T("");
	tex = _T("La solution est double et vaut : ");
	CString r1; r1.Format(_T("%lf"), m_rd);
	tex += r1;
	return tex;
}
