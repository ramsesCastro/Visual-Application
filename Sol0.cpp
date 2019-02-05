#include "stdafx.h"
#include "Sol0.h"
#include <math.h>


CSol0::CSol0()
	: m_a(0)
	, m_b(0)
	, m_delta(0)
	, m_r1(0)
	, m_r2(0)
{
}


CSol0::~CSol0()
{
}


CSol0::CSol0(double a, double b, double delta)
{
	m_a = a; m_b = b; m_delta = delta;
	m_r1 = (-m_b + sqrt(m_delta)) / (2 * m_a);
	m_r2 = (-m_b - sqrt(m_delta)) / (2 * m_a);
}


CString CSol0::Affiche()
{
	//cout << "Les solutions sont reelles et valent :" << m_r1 << " et " << m_r2 << endl;
	CString tex; tex = _T("");
	tex = _T("Les solutions sont reelles et valent : ");
	CString r1; r1.Format(_T("%lf"), m_r1);
	CString r2; r2.Format(_T("%lf"), m_r2);
	tex += r1; tex += _T(" et "); tex += r2;
	return tex;
}
