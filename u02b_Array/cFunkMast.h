#pragma once
#include <iostream>
using namespace std; 

class cFunkMast
{
private :
	int A_Antennen;
	double Reichweite, Hoehe , Latitude , Longitude;

public: 
	cFunkMast();
	cFunkMast(int A, double R, double Hoe, double La, double Lo);
	//cFunkMast() : A_Antennen(0), Reichweite(0.0), Hoehe(0.0), Latitude(49.7), Longitude(8.3){}
	~cFunkMast();
	void eingabe();
	void korrHoehe();
	void ausgabe();

};

