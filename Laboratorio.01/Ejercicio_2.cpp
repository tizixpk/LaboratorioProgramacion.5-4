#include <iostream>

using namespace std;

int main() {
	int Numero;
	cout << "Porfavor Ingrese un Numero. ";
	cin >> Numero;
	if ( Numero > 0 ) {
		cout << "El Numero Es Positivo.";
	}
	else if ( Numero < 0 ) {
		cout << "El Numero Es Negativo";
	}
	else {
		cout << "El Numero es 0";
	}	
	return 0;
	}
