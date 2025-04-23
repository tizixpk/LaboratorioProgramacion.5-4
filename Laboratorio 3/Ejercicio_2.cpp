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
cout << Numeros[1] << endl;
cout << Numeros[2] << endl;
cout << Numeros[3] << endl;
cout << Numeros[4] << endl;
cout << Numeros[5] << endl;
cout << Numeros[6] << endl;
cout << Numeros[7] << endl;
cout << Numeros[8] << endl;
cout << Numeros[9] << endl;
cout << Numeros[10] << endl;
cout << "Multiplicacion : " << Multiplicacion << endl;
return 0;
}
