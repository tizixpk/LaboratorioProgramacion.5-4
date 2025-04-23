#include <iostream>
using namespace std;
int main() {
    int Vector_A[10];
    int Vector_B[10];
    int Elementos_Igual_Posicion[10];
    for (int i = 0; i < 10; i++) {
         cout << "Ingrese 10 numeros para el primer vector: " << i << endl;
        cin >> Vector_A[i];
    }
    for (int i = 0; i < 10; i++) {
        cout << "Ingrese 10 numeros para el segundo vector: ";
        cin >> Vector_B[i];
    }
    for (int i = 0; i < 10; i++) {
        Elementos_Igual_Posicion[i] = Vector_A[i] + Vector_B[i];
    }
    cout << "La suma de los vectores es:";
    for (int i = 0; i < 10; i++) {
        cout << Elementos_Igual_Posicion[i] << " ";
    }
    return 0;
}
