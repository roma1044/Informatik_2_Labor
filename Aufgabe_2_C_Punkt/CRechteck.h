//Autor: Manuel Rothas
//Datum: 29.10.2020
//Beschreibung:
// Deklaration der Klasse CRechteck. Sie repräsentiert ein Rechteck parallel zum
//Achsenkreuz mit zwei Referenzpunkten mit Hilfe der Klasse CPunkt.
#pragma once
#include "CPunkt.h"
class CRechteck
{
public:
	CRechteck();
	CRechteck(CPunkt& A, CPunkt& B);
	//~CRechteck(); //Destruktor
	unsigned int getFlaeche();
	
	int getXmin();
	int getYmin();
	int getXmax();
	int getYmax();
private:
	CPunkt PA, PB;
};

