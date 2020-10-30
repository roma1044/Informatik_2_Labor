// Autor: Manuel Rothas
//Datum: 29.10.2020
#pragma once
#include "CPunkt.h"
class CRechteck
{
public:
	CRechteck(const CPunkt& A, const CPunkt& B);
	double getFlaeche();
	~CRechteck();
	double getXmin();
	double getYmin();
	double getXmax();
	double getYmax();
private:
	CPunkt mA, mB;
};

