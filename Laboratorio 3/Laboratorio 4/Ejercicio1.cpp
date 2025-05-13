#include <iostream>
#include <cstdlib> 
#include <ctime>   
using namespace std;
const int FILAS = 3;
const int COLUMNAS = 5;

int main() {
    int matriz[FILAS][COLUMNAS];
    srand(time(0));
  
    for (int i = 0; i < FILAS; i++) {
        for (int j = 0; j < COLUMNAS; j++) {
            matriz[i][j] = rand() % 100 + 1; 
        }
    }
    cout << "Matriz 3x5:\n";
  
    for (int i = 0; i < FILAS; i++) {
        for (int j = 0; j < COLUMNAS; j++) {
            cout << matriz[i][j] << "\t";
        }
        cout << endl;
    }
    cout << "\nFila 2: ";
  
    for (int j = 0; j < COLUMNAS; j++) {
        cout << matriz[1][j] << " ";
    }
    cout << endl;
    cout << "Columna 3:\n";
  
    for (int i = 0; i < FILAS; i++) {
        cout << matriz[i][2] << endl;
    }
    int suma = 0;
  
    for (int i = 0; i < FILAS; i++) {
        suma += matriz[i][0];
    }
    cout << "Suma de la columna 1: " << suma << endl;

    for (int i = 0; i < FILAS - 1; i++) {
        for (int j = i + 1; j < FILAS; j++) {
            if (matriz[i][0] > matriz[j][0]) {
                swap(matriz[i][0], matriz[j][0]);
            }
        }
    }

    cout << "\nPrimera columna ordenada:\n";
    for (int i = 0; i < FILAS; i++) {
        cout << matriz[i][0] << endl;
    }

    return 0;
}
