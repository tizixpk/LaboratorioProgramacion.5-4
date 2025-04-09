#include <iostream>
using namespace std;
int main() {
	int Numero1,Suma;
	do  {
		cout << "Ingresa el  digito ( 0 para terminar )" << endl;
		cin >> Numero1;
		Suma+=Numero1;
	} while ( Numero1!=0);
	cout << "La suma es" << Suma;
	
return 0;
}
