#include <iostream>
using namespace std;

int main() {
    int vector[20], mayor, indice;

    cout << "Ingrese 20 numeros:\n";
    for (int i = 0; i < 20; i++) {
        cin >> vector[i];
        if (i == 0 || vector[i] > mayor) {
            mayor = vector[i];
            indice = i;
        }
    }

    cout << "El mayor es: " << mayor << " en la posicion " << indice << endl;

    cout << "Vector completo:\n";
    for (int i = 0; i < 20; i++) {
        cout << vector[i] << " ";
    }

    return 0;
}
