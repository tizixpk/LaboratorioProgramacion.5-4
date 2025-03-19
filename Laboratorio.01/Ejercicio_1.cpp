#include <iostream>

using namespace std;

int main() {
int Numero;
cout << "Escriba Un Numero Entero ";
cin >> Numero;
if (Numero > 100) {
	cout << "El Numero Ingresado es: " << Numero << " Osea Mayor a 100";
}
	else {
		cout << "El numero es menor o igual a 100";
	}	
	return 0;
}
