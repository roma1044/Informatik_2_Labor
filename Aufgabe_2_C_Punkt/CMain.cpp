// Autor: Manuel Rothas
//Datum: 29.10.2020
#include "CPunkt.h"
#include "CRechteck.h"
#include <iostream>
using namespace std;
int main()
{
	
	CPunkt P1(1, 2);
	CPunkt P2(3, 4);
	CRechteck R1(P1, P2);
	cout << "P1 x:" << P1.get_x() << endl;
	cout << "P1 y:" << P1.get_y() << endl;
	cout << "P2 x:" << P2.get_x() << endl;
	cout << "P2 y:" << P2.get_y() << endl;
	cout << "R1 P1 x: " << R1.getXmin();
}