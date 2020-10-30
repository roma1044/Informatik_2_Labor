// Autor: Manuel Rothas
//Datum: 29.10.2020

#include "CPunkt.h"

CPunkt::CPunkt(int _x, int _y) :x(0), y(0) // Konstruktor und Initialisierung der Attribute mittels einer Initioalisierungsliste
{
	x = _x;
	y = _y;
}

int CPunkt::get_x() {

	return x;
}

int CPunkt::get_y()
{
	return y;
}

bool CPunkt::set_x(int _x)
{
	x = _x;
	return true;
}

bool CPunkt::set_y(int _y)
{
	y = _y;
	return true;
}
