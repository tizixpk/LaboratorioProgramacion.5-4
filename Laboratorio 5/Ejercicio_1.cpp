#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
const int F = 4;
const int C = 4;

// esta función sirve  para imprimir la matriz
void imprimirMatriz(int matriz[F][C]) {
    for (int i = 0; i < F; i++) {
        for (int j = 0; j < C; j++) {
            cout << matriz[i][j] << "\t";
        }
        cout << endl;
    }
}

int main() {
    srand(time(0));
    int matriz[F][C];

    // aca lleno la matriz con números aleatorios del 1 al 99
    for (int i = 0; i < F; i++) {
        for (int j = 0; j < C; j++) {
            matriz[i][j] = rand() % 99 + 1;
        }
    }

    cout << "Matriz original:\n";
    imprimirMatriz(matriz);

    // promedio general de la matriz
    int sumaTotal = 0;
    for (int i = 0; i < F; i++)
        for (int j = 0; j < C; j++)
            sumaTotal += matriz[i][j];

    float promedio = (float)sumaTotal / (F * C);
    cout << "\n// Promedio general de la matriz\n"; // el /n es para que quede bien cuando se ejecuta x eso lo pongo
    cout << "Promedio: " << promedio << endl;

    // suma de pares por columna
    cout << "\n// Suma de pares por columna\n";
    for (int j = 0; j < C; j++) {
        int sumaPares = 0;
        for (int i = 0; i < F; i++) {
            if (matriz[i][j] % 2 == 0)
                sumaPares += matriz[i][j];
        }
        cout << "Columna " << j << ": " << sumaPares << endl;
    }

    // suma de impares por fila
    cout << "\n// Suma de impares por fila\n";
    for (int i = 0; i < F; i++) {
        int sumaImpares = 0;
        for (int j = 0; j < C; j++) {
            if (matriz[i][j] % 2 != 0)
                sumaImpares += matriz[i][j];
        }
        cout << "Fila " << i << ": " << sumaImpares << endl;
    }

    // posición del máximo
    int maxVal = matriz[0][0], maxFila = 0, maxCol = 0;
    for (int i = 0; i < F; i++) {
        for (int j = 0; j < C; j++) {
            if (matriz[i][j] > maxVal) {
                maxVal = matriz[i][j];
                maxFila = i;
                maxCol = j;
            }
        }
    }
    cout << "\n// Posición del valor máximo\n";
    cout << "Máximo: " << maxVal << " en (" << maxFila << ", " << maxCol << ")\n";

    // posición del mínimo
    int minVal = matriz[0][0], minFila = 0, minCol = 0;
    for (int i = 0; i < F; i++) {
        for (int j = 0; j < C; j++) {
            if (matriz[i][j] < minVal) {
                minVal = matriz[i][j];
                minFila = i;
                minCol = j;
            }
        }
    }
    cout << "\n// Posición del valor mínimo\n";
    cout << "Mínimo: " << minVal << " en (" << minFila << ", " << minCol << ")\n";

    // ordenar fila 2 en forma ascendente (índice 2)
    cout << "\n// Ordenar en forma ascendente la fila 2\n";
    for (int i = 0; i < C - 1; i++) {
        for (int j = i + 1; j < C; j++) {
            if (matriz[2][i] > matriz[2][j]) {
                int temp = matriz[2][i];
                matriz[2][i] = matriz[2][j];
                matriz[2][j] = temp;
            }
        }
    }
    imprimirMatriz(matriz);

    // ordenar columna 3 en forma descendente (índice 3)
    cout << "\n// Ordenar en forma descendente la columna 3\n";
    for (int i = 0; i < F - 1; i++) {
        for (int j = i + 1; j < F; j++) {
            if (matriz[i][3] < matriz[j][3]) {
                int temp = matriz[i][3];
                matriz[i][3] = matriz[j][3];
                matriz[j][3] = temp;
            }
        }
    }
    imprimirMatriz(matriz);

    // intercambiar la columna 2 y 4 (índices 1 y 3)
    cout << "\n// Intercambiar la columna 2 y 4\n";
    for (int i = 0; i < F; i++) {
        int temp = matriz[i][1];   // la varible temp es para manipular la matriz  y imtercambiar las columnas
        matriz[i][1] = matriz[i][3];
        matriz[i][3] = temp;
    }
    imprimirMatriz(matriz);

    return 0;
}
