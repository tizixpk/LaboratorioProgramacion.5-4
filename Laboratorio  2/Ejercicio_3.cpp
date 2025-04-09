#include <iostream>
using namespace std;
int main() {
	float Numero,Suma = 0;
while(Suma <= 1000 ) {
	cout << "ingresa un numero" << endl;
	cin >> Numero;
	Suma+=Numero;
}
	cout << "La suma total es " << Suma;
	return 0;
	
}
