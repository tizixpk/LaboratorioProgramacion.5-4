#include <iostream>
using namespace std;
int main() {
	int Numero, Mayor;
	do  {
		cout << "Ingresa el  digito ( 0 para terminar )" << endl;
		cin >> Numero;
		
		if (Mayor<Numero ){
		Mayor=Numero;
		}
	} while ( Numero!=0);
	cout << "El numero mayor es" << Mayor;
return 0;
}
