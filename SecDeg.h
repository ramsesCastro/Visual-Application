#include "stdafx.h"
#pragma once
#include "Solution.h"
#include <iostream>
using namespace std;
#include "Sol0.h"
#include "Sol1.h"
#include "Sol2.h"

class CSecDeg
{
public:
	CSecDeg();
	~CSecDeg();
private:
	double m_a;
	double m_b;
	double m_c;
	double m_delta;
public:
	CSecDeg(double a, double b, double c);
	void Discriminant();
	void Test_delta();
private:
	CSolution* m_pSolution;
public:
	CString resoudre();
private:
	CString m_result;
};

