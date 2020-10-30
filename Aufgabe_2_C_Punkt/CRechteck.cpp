#include "CRechteck.h"
// Autor: Manuel Rothas
//Datum: 29.10.2020
//Implementierung der Methoden der Klasse CRechteck.

CRechteck::CRechteck( CPunkt& A, CPunkt& B)		// Weist PA (erster Referenzpunkt) die Niedrigsten Koordinatenwerte zu und PB (zweiter Referenzpunkt) die größten 
{
	// Die Koordinaten der per Referenzparameter ünergebenen Punkte sollen hier so sortiert werden, dass bei beliebigen Aufruf-Parametern
	// immer der erste Referenzpunkt die linkte untere Ecke angibt, der zweite die rechte obere Ecke
	int A_x = A.get_x();
	int A_y = A.get_y();
	int B_x = B.get_x();
	int B_y = B.get_y();
	if (A_x > B_x) // Wenn x - Komponente von A größer als B
	{								// Tausche die x- Komponenten
		
		this->PA.set_x(B_x);	// Weise kleinere Koordinate erstem Referenzpunkt zu
		this->PB.set_x(A_x);
	}
	else 
	{
		this->PA.set_x(A_x);
		this->PB.set_x(B_x);

	}
	if (A_y > B_y) // Wenn x - Komponente von A größer als B
	{								// Tausche die x- Komponenten

		this->PA.set_y(B_y);	// Weise kleinere Koordinate erstem Referenzpunkt zu
		this->PB.set_y(A_y);
	}
	else
	{
		this->PA.set_y(A_y);
		this->PB.set_y(B_y);

	}
}

unsigned int CRechteck::getFlaeche()
{
	int a = PB.get_x() - PA.get_x();     // Länge der Seiten berechen
	int b = PB.get_y() - PA.get_y();

	return(a*b);		// Produkt der Seiten des Rechtecks
}

// gibt kleinste Koordinaten (von PA) zurück
int CRechteck::getXmin()	
{
	return PA.get_x();
}

int CRechteck::getYmin()
{
	return PA.get_y();
}
//gibt größte Koordinaten (von PB) zurück
int CRechteck::getXmax()
{
	return PB.get_x();
}

int CRechteck::getYmax()
{
	return PB.get_y();
}
