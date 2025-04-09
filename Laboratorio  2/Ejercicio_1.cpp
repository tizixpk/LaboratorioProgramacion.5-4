#include <iostream>
using namespace std;
int main() {
	int Base,Exponente,Resultado = 1;
	cout << "Ingresa la Base";
	cin >> Base;
	cout << "Ingresa el exponente";
	cin >> Exponente;
	if (Exponente < 0) {
		cout << "No soporta algoritmos negativos";
	} 
	else if ( Exponente == 0) {
		cout << "Resultado es 1";
	} 
	else {
		for (int i=0; i<Exponente; i++) {
			Resultado*=Base;
		}
		cout << "Resultado: " << Resultado;
	}
	
	return 0;
	
}
