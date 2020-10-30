// Autor: Manuel Rothas
//Datum: 29.10.2020

#include "CPunkt.h"
#include <iostream>
using namespace std;
int main()
{

	CPunkt P(1, 2);

	cout << P.get_x() << endl;
	P.set_y(7);
	cout << P.get_y();
}