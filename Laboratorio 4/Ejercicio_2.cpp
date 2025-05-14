#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

const int maxf = 3;
const int maxc = 5;

int main() {
    int matriz[maxf][maxc];

    srand(time(0));

    // Cargar matriz con números aleatorios del 1 al 100
    for (int i = 0; i < maxf; i++) {
        for (int j = 0; j < maxc; j++) {
            matriz[i][j] = rand() % 100 + 1;
        }
    }

    // 1 Mostrar la matriz completa
    cout << "Matriz:\n";
    for (int i = 0; i < maxf; i++) {
        for (int j = 0; j < maxc; j++) {
            cout << matriz[i][j] << "\t";
        }
        cout << endl;
    }

    // 2.a) Visualizar la diagonal principal (solo si es cuadrada: 3x3)
    cout << "\nDiagonal principal:\n";
    for (int i = 0; i < maxf && i < maxc; i++) {
        cout << matriz[i][i] << " ";
    }
    cout << endl;

    // 2.b) Calcular el promedio de la primera fila (fila 0)
    int sumaFila = 0;
    for (int j = 0; j < maxc; j++) {
        sumaFila += matriz[0][j];
    }
    float promedio = static_cast<float>(sumaFila) / maxc;
    cout << "\nPromedio de la primera fila: " << promedio << endl;

    // 2.c) Contar y mostrar elementos de la primera fila que superan al promedio
    int contador = 0;
    cout << "Elementos de la primera fila mayores al promedio:\n";
    for (int j = 0; j < maxc; j++) {
        if (matriz[0][j] > promedio) {
            cout << matriz[0][j] << " ";
            contador++;
        }
    }
    cout << "\nCantidad: " << contador << endl;

    // 2.d) Ordenar la última columna (columna 4) de mayor a menor
    for (int i = 0; i < maxf - 1; i++) {
        for (int j = i + 1; j < maxf; j++) {
            if (matriz[i][4] < matriz[j][4]) {
                // Intercambiar solo la última columna
                int temp = matriz[i][4];
                matriz[i][4] = matriz[j][4];
                matriz[j][4] = temp;
            }
        }
    }

    // Mostrar solo la última columna ordenada
    cout << "\nÚltima columna ordenada de mayor a menor:\n";
    for (int i = 0; i < maxf; i++) {
        cout << matriz[i][4] << endl;
    }

    return 0;
}
