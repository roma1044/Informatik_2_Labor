#include "CRechteck.h"
// Autor: Manuel Rothas
//Datum: 29.10.2020

CRechteck::CRechteck( CPunkt& A, CPunkt& B)		// Weist PA (erster Referenzpunkt) die Niedrigsten Koordinatenwerte zu und PB (zweiter Referenzpunkt) die größten 
{
	// Die Koordinaten der per Referenzparameter ünergebenen Punkte sollen hier so sortiert werden, dass bei beliebigen Aufruf-Parametern
	// immer der erste Referenzpunkt die linkte untere Ecke angibt, der zweite die rechte obere Ecke
	if (A.get_x() > B.get_x()) // Wenn x - Komponente von A größer als B
	{								// Tausche die x- Komponenten
							
		this->PA.set_x(B.get_x());	// Weise kleinere Koordinate erstem Referenzpunkt zu
	}
	else 
	{
		this->PA.set_x(A.get_x());	
	}
}

unsigned int CRechteck::getFlaeche()
{
	int a = PB.get_x() - PA.get_x();     // Länge der Seiten berechen
	int b = PB.get_y() - PA.get_y();

	return(a*b);		// Produkt der Seiten des Rechtecks
}

int CRechteck::getXmin()	// gibt kleinste x - Koordinate (von PA) zurück.
{
	return PA.get_x();
}

int CRechteck::getYmin()
{
	return PA.get_y();
}

int CRechteck::getXmax()
{
	return PB.get_x();
}

int CRechteck::getYmax()
{
	return PB.get_y();
}
