#include <iostream>
using namespace std;
int main() {
int Numero, Resultado;
cout << "Ingresa un Numero del 1 al 10." << endl;
cin >> Numero;
if ( Numero >10) {
	return 0;
}
else {
	for (int i=1; i<=10; i++) {
		cout << Numero <<  "x" << i << "=" << Numero*i << endl;
	}
}
	
	return 0;
	
}
