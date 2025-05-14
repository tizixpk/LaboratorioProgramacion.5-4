#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
const int MAXF = 3;
const int MAXC = 5;
int main() {
    int matriz[MAXF][MAXC];
    srand(time(0));
    for (int i = 0; i < MAXF; i++) {
        for (int j = 0; j < MAXC; j++) {
            matriz[i][j] = rand() % 100 + 1;
        }
    }

    // 1 Mostrar la matriz completa
    cout << "Matriz:\n";
    for (int i = 0; i < MAXF; i++) {
        for (int j = 0; j < MAXC; j++) {
            cout << matriz[i][j] << "\t";
        }
        cout << endl;
    }

    //punto a
    cout << "\nDiagonal principal:\n";
    for (int i = 0; i < MAXF && i < MAXC; i++) {
        cout << matriz[i][i] << " ";
    }
    cout << endl;

    // punto b
    int sumaFila = 0;
    for (int j = 0; j < MAXC; j++) {
        sumaFila += matriz[0][j];
    }
    float promedio = static_cast<float>(sumaFila) ;
    cout << "\nPromedio de la primera fila: " << promedio << endl;

    //punto c
    int contador = 0;
    cout << "Elementos de la primera fila mayores al promedio:\n";
    for (int j = 0; j < MAXC; j++) {
        if (matriz[0][j] > promedio) {
            cout << matriz[0][j] << " ";
            contador++;
        }
    }
    cout << "\nCantidad: " << contador << endl;

    //punto d
    for (int i = 0; i < MAXF - 1; i++) {
        for (int j = i + 1; j < MAXF; j++) {
            if (matriz[i][4] < matriz[j][4]) {
                int temp = matriz[i][4];
                matriz[i][4] = matriz[j][4];
                matriz[j][4] = temp;
            }
        }
    }

    cout << "\nÚltima columna ordenada de mayor a menor:\n";
    for (int i = 0; i < MAXF; i++) {
        cout << matriz[i][4] << endl;
    }

    return 0;
}
