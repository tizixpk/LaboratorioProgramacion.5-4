#include <iostream>
using namespace std;
int main () {
    int Numeros [10];
    int Suma = 0;
    for ( int i=0; i<10; i++) {
        cout << "Escriba EL numero: " << i;
        cin >> Numeros[i];
        Suma = Suma + Numeros [i];
        }
float MediaAritmerica = suma/10;
cout << "La suma de los numeros es: " << Suma << endl;
cout << "La media aritmerica es: " << MediaAritmerica << endl;
return 0;
}
