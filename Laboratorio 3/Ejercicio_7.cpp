#include <iostream>
using namespace std;
int main() {
    int vector[20];
    int cantidad = 0, numero =0;
    cout << "Ingrese numeros (hasta 20 o hasta que ponga 0): ";
    while (cantidad < 20) {
        cin >> numero;
        if (numero == 0) break;
        vector[cantidad] = numero;
        cantidad++;
    }
    cout << "Números en orden inverso:";
    for (int i = cantidad - 1; i >= 0; i--) {
        cout << vector[i] << " ";
    }
    return 0;
}
