// Autor: Manuel Rothas
//Datum: 29.10.2020
#include "CPunkt.h"
#include "CRechteck.h"
#include <iostream>
using namespace std;

bool pruefeUeberlappung(CRechteck& RA, CRechteck& RB);
int main()
{
	CPunkt P1(0,0);
	CPunkt P2(0, 0);
	CRechteck* pR1 = NULL;
	CRechteck* pR2 = NULL;

	// Eingabe der Rechtecks - Koordinaten
	cout << "Bitte geben Sie zwei Rechtecke ein:" << endl << endl;
	for (int i = 0; i < 2; i++) {
		int tmp;
		cout << "Rechteck R" << i + 1 << endl;
		cout << "------- ---" << endl;
		cout << "Punkt 1, X-Koordinate? ";
		cin >> tmp;
		cout << endl;
		P1.set_x(tmp);
		cout << "Punkt 1, Y-Koordinate? ";
		cin >> tmp;
		cout << endl;
		P1.set_y(tmp);
		cout << "Punkt 2, X-Koordinate? ";
		cin >> tmp;
		cout << endl;
		P2.set_x(tmp);
		cout << "Punkt 2, Y-Koordinate? ";
		cin >> tmp;
		cout << endl;
		P2.set_y(tmp);
		if (i + 1 == 1)   // Beim ersten durchgang Zeiger mit dem Ersten Rechteck und P1, P2 initialisieren
			pR1 = new CRechteck(P1, P2);
		if (i + 1 == 2)
			pR2 = new CRechteck(P1, P2);	// Beim zweiten Durchgang Zeiger mit dem zweiten Rechteck und den nächsten beiden Punkten initialisieren
	}
	cout << "Ausgabe der Ergebnisse:" << endl;
	cout << "------------------------" << endl << endl;
	cout << "R1 = [ ( " << pR1->getXmin() << ", " << pR1->getYmin() << "), ( " << pR1->getXmax() << ", " << pR1->getYmax() << ") ], A(R1) =" << pR1->getFlaeche() << endl;
	cout << "R2 = [ ( " << pR2->getXmin() << ", " << pR2->getYmin() << "), ( " << pR2->getXmax() << ", " << pR2->getYmax() << ") ], A(R2) =" << pR2->getFlaeche() << endl;
	cout << endl;
	// Die Prüfung auf Überlappung soll Kommutativ sein
	cout << "pruefeUeberlappung(R1, R2) = " << pruefeUeberlappung(*pR1, *pR2) << endl;
	cout << "pruefeUeberlappung(R2, R1) = " << pruefeUeberlappung(*pR1, *pR2) << endl;

	
}

bool pruefeUeberlappung(CRechteck& RA, CRechteck& RB)
{
	if (RA.getYmax() < RB.getYmin()|| RA.getYmin() > RB.getYmax()) {
		return false;
	}
	if (RA.getXmax() < RB.getXmin() || RA.getXmin() > RB.getXmax()) {
		return false;
	}
	return true;
}
