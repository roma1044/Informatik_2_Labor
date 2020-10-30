// Autor: Manuel Rothas
//Datum: 29.10.2020
// Enth�lt die Klassendeklaration der Klasse CPunkt
// Designregeln (Prof. Wietzke):
//<*.h> Dateien enthalten nur Klassendeklarationen und ggf. Variablendeklarationen, keine Variablendefinitionen. 
// Sie erzeugen keinen Speicher.
//Variablen bekommen Namen, die die Bedeutung wiedergeben.
//Pointer werden mit Ptr - Endung gekennzeichnet.
//Wer dynamische Objekte anlegt, ist auch f�r das L�schen verantwortlich.

#pragma once

class CPunkt
{
public:
	CPunkt(int _x, int _y);
	int get_x();
	int get_y();
	bool set_x(int _x);
	bool set_y(int _y);

private:
	int x;
	int y;
};