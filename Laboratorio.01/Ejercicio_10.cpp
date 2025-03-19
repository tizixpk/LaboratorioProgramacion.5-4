#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Ingrese un número: ";
    cin >> num;

    if (num > 9 && num < 100) {  // Comprobar si tiene dos cifras
        int dig1 = num / 10;  // Primer dígito
        int dig2 = num % 10;  // Segundo dígito

        cout << "Suma de los dígitos: " << (dig1 + dig2) << endl;

        int pares = 0;
        if (dig1 % 2 == 0) pares++;
        if (dig2 % 2 == 0) pares++;

        cout << "Cantidad de dígitos pares: " << pares << endl;
    } else {
        cout << "El número no es de dos cifras." << endl;
    }

    return 0;
}
