#include "cFunkMast.h"
using namespace std; 



cFunkMast::cFunkMast(int A, double R, double Hoe, double La, double Lo)
{
    A_Antennen = 0;
    Reichweite = 0.0;
    Latitude = 49.7;
    Longitude = 8.3;
    Hoehe = 0.0;
}
cFunkMast::cFunkMast() {}

void cFunkMast:: eingabe(){
    cout << " Antennenzahl: ";
    cin >> A_Antennen;
    cout << "Reichweite: ";
    cin >> Reichweite;
    cout << "Höhe: ";
    cin >> Hoehe;
    cout << "Latitude: ";
    cin >> Latitude;
    cout << "Longitude: ";
    cin >> Longitude;
    korrHoehe();

}

void cFunkMast::korrHoehe() {
    if ((A_Antennen > 0) && (A_Antennen <= 4)) {
        Hoehe = 30.0;
    }
    else if ((A_Antennen > 0) && (A_Antennen > 4)) {
        Hoehe = 50.0;
    }
}

void cFunkMast::ausgabe() {

    if (A_Antennen > 0) {
        cout << " Anzahl von Antennen = " << A_Antennen << endl;
        cout << " Reichweite = " << Reichweite << endl;
        cout << " Hoehe = " << Hoehe << endl;
        cout << " Position = (" << Latitude << ";" << Longitude << ")\n"; cout << endl;

    }

}

cFunkMast::~cFunkMast() {

}