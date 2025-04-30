#include <iostream>
using namespace std;
int main () {
    int Numeros [10];
    int Multiplicacion = 0;
    for ( int i=1; i<11; i++) {
        cout << "Escriba el numero " << i << " :";
        cin >> Numeros[i];
        Multiplicacion = Multiplicacion + Numeros [i];
        }
for ( int i = 1; i < 11; i++){
	cout << "Vector" << i << ": " << Numeros[i] << endl;
}
cout << "Multiplicacion : " << Multiplicacion << endl;
return 0;
}
