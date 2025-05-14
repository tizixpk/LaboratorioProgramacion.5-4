#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    const int MAXF = 3;
    const int MAXC = 5;
    int matriz[MAXF][MAXC];
    srand(time(0));
    for (int i = 0; i < MAXF; i++) {
        for (int j = 0; j < MAXC; j++) {
            matriz[i][j] = rand() % 100 + 1;
        }
    }

    cout << "Matriz completa:" << endl;
    for (int i = 0; i < MAXF; i++) {
        for (int j = 0; j < MAXC; j++) {
            cout << "|" << matriz[i][j] << "|\t";
        }
        cout << endl;
    }
    cout << endl;

    //punto a
    cout << "Diagonal principal:" << endl;
    for (int i = 0; i < MAXF && i < MAXC; i++) {
        cout << "|" << matriz[i][i] << "| ";
    }
    cout << endl << endl;

    // punto b
    int sumaFila = 0;
    for (int j = 0; j < MAXC; j++) {
        sumaFila += matriz[0][j];
    }
    float promedio = (float)sumaFila / MAXC;
    cout << "Promedio de la primera fila: " << promedio << endl << endl;

    //punto c
    int contador = 0;
    cout << "Valores de la primera fila mayores al promedio:" << endl;
    for (int j = 0; j < MAXC; j++) {
        if (matriz[0][j] > promedio) {
            cout << "|" << matriz[0][j] << "| ";
            contador++;
        }
    }
    cout << endl << "Cantidad: " << contador << endl << endl;

    //punto d
    for (int i = 0; i < MAXF - 1; i++) {
        for (int j = i + 1; j < MAXF; j++) {
            if (matriz[i][4] < matriz[j][4]) {
                int aux = matriz[i][4];
                matriz[i][4] = matriz[j][4];
                matriz[j][4] = aux;
            }
        }
    }

 
    cout << "Última columna ordenada de mayor a menor:" << endl;
    for (int i = 0; i < MAXF; i++) {
        cout << "|" << matriz[i][4] << "|" << endl;
    }

    return 0;
}
