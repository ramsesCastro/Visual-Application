#include "stdafx.h"
#pragma once
#include "Solution.h"
#include <iostream>
using namespace std;

class CSol2 :
	public CSolution
{
public:
	CSol2();
	~CSol2();
	CSol2(double a, double b, double delta);
private:
	double m_a;
	double m_b;
	double m_delta;
	double m_rreel;
	double m_rimg;
public:
	CString Affiche();
};

