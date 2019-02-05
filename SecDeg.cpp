#include "stdafx.h"
#include "SecDeg.h"



CSecDeg::CSecDeg()
	: m_a(0)
	, m_b(0)
	, m_c(0)
	, m_delta(0)
	, m_pSolution(NULL)
	, m_result(_T(""))
{
}


CSecDeg::~CSecDeg()
{
	if (m_pSolution != NULL) delete m_pSolution; m_pSolution = NULL;
}


CSecDeg::CSecDeg(double a, double b, double c)
{
	m_a = a; m_b = b; m_c = c;
}


void CSecDeg::Discriminant()
{
	m_delta = m_b*m_b - 4 * m_a*m_c;
}


void CSecDeg::Test_delta()
{
	if (m_delta > 0) 
	{ 
		m_pSolution = new CSol0(m_a,m_b,m_delta); 
		m_result = m_pSolution->Affiche();
	}
	if (m_delta == 0) 
	{ 
		m_pSolution = new CSol1(m_a,m_b);
		m_result = m_pSolution->Affiche();
	}
	if (m_delta < 0) 
	{ 
		m_pSolution = new CSol2(m_a,m_b,m_delta);
		m_result = m_pSolution->Affiche();
	}
}


CString CSecDeg::resoudre()
{
	Discriminant();
	Test_delta();
	return m_result;
}
