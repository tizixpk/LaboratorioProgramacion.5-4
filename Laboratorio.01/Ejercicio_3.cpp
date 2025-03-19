#include <iostream>

using namespace std;

int main() {
int numero1;
int numero2;
cout << "Ingrese el primer digito";
cin >> numero1;
cout << "Ingrese el segundo digito";
cin >> numero2;
if (  numero1 % numero2 == 0 ) {
	cout << "EL Numero " << numero1 << "Es Divisible Por " << numero2;
}
	return 0;
	}
