#include <iostream>
using namespace std;
int main() {
int num1;
int num2;
int num3;
int contrasena;
cout << "ingresa el primer digito: ";
cin >> num1;
cout << "ingresa el segundo digito: ";
cin >> num2;
cout << "ingresa el tercero digito: ";
cin >> num3;
contrasena = num1+num2+num3;
if ( contrasena == 6 ) {
	cout << "acceso permitido";
}
else {
	cout << "acceso DENEGADO";
}

	return 0;

	}
