#include <iostream>
using namespace std;
int main() {
    int vector[20], mayor = 0, indice = 0;
    for (int i = 0; i < 20; i++) {
        cout << "Ingrese 20 numeros: ";
        cin >> vector[i];
        if (i == 0 and vector[i] > mayor) {
            mayor = vector[i];
            indice = i;
        }
    }
    cout << "El mayor es: " << mayor << " en la posicion " << indice << endl;
    cout << "Vector completo: ";
    for (int i = 0; i < 20; i++) {
        cout << vector[i] << " ";
    }
    return 0;
}
