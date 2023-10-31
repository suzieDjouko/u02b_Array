
#include "cFunkMast.h"
int main() {
	cFunkMast funkmasten[100];
	// ersten 5 Objekte befüllen 
	for (int i = 0; i < 5; i++) {
		cout << "Funkmast " << i + 1 << " eintippen:\n";
		funkmasten[i].eingabe();
	}
	// Ausgabe 
	cout << " Ausgabe der Funkmastenliste :\n" << endl;
	for (int i = 0; i < 5; i++) {
		funkmasten[i].ausgabe();
	}

	return 0;

}