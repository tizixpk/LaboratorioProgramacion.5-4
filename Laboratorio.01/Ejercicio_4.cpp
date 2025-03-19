#include <iostream>
using namespace std;

int main () {
	int numero;
	cout << "Ingrese el  digito: ";
	cin >> numero;
	if (  numero % 2 == 0 ) {
		cout << "es par" ;
	}
	else {
		cout << "es impar";
	}
	if (  numero % 3 == 0 ) {
		cout << "  y a demas es multiplo de 3" ;
	}
	else {
		cout << " y demas no es multiplo de 3";
	}
return 0;
	}
