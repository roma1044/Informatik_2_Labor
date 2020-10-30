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

int CRechteck::getXmin()	// gibt kleinste x - Koordinate (von PA) zurück.
{
	return PA.get_x();
}
