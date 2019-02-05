#include "stdafx.h"
#include "Sol2.h"
#include <math.h>


CSol2::CSol2()
	: m_a(0)
	, m_b(0)
	, m_delta(0)
	, m_rreel(0)
	, m_rimg(0)
{
}


CSol2::~CSol2()
{
}


CSol2::CSol2(double a, double b, double delta)
{
	m_a = a; m_b = b; m_delta = delta;
	m_rreel = -m_b / (2 * a);
	m_rimg = sqrt(-delta) / (2 * a);
}


CString CSol2::Affiche()
{
	//cout << "Les solutions sont complexes conjuguees et valent :" << endl;
	//cout << "Pour la partie réelle :" << m_rreel << endl;
	//cout << "Pour la partie imaginaire : " << m_rimg << endl;
	CString tex; tex = _T("");
	tex = _T("Les solutions sont complexes conjuguees et valent : ");
	CString r1; r1.Format(_T("%lf"), m_rreel);
	CString r2; r2.Format(_T("%lf"), m_rimg);
	tex += r1; tex += _T(" et +/- i"); tex += r2;
	return tex;
}
