#include "stdafx.h"
#pragma once
#include "Solution.h"
#include <iostream>
using namespace std;
#include <string.h>

class CSol0 :
	public CSolution
{
public:
	CSol0();
	~CSol0();
	CSol0(double a, double b, double delta);
private:
	double m_a;
	double m_b;
	double m_delta;
	double m_r1;
	double m_r2;
public:
	CString Affiche();
};

