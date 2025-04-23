#include <iostream>
using namespace std;
const int TAMAÑO_VECTOR_1 =5;
const int TAMAÑO_VECTOR_2 =5;
int main() {
 int Vector_1[TAMAÑO_VECTOR_1],Vector_2[TAMAÑO_VECTOR_2], Vector_3[TAMAÑO_VECTOR_1 + TAMAÑO_VECTOR_2 ];
    for (int i = 0; i < TAMAÑO_VECTOR_1; i++) {
        cout << "Ingrese los elementos del vector " << i << " : " ;
        cin >> Vector_1[i];
        Vector_3[i] = Vector_1[i];
    }
    for (int i = 0; i < TAMAÑO_VECTOR_2 ; i++) {
        cout << "Ingrese los elementos del vector " << i << " : " ;
        cin >> Vector_2[i];
        Vector_3[ TAMAÑO_VECTOR_1 + i] = Vector_2[i]; 
    }
    cout << "Vector combinado:" ;
    for (int i = 0; i < TAMAÑO_VECTOR_1 + TAMAÑO_VECTOR_2; i++) {
        cout << Vector_3[i] << " ";
    }
    return 0;
}
