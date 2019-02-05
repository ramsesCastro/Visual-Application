#include "stdafx.h"
#pragma once
#include "Solution.h"
#include <iostream>
using namespace std;

class CSol1 :
	public CSolution
{
public:
	CSol1();
	~CSol1();
	CSol1(double a, double b);
private:
	double m_a;
	double m_b;
	double m_rd;
public:
	CString Affiche();
};

