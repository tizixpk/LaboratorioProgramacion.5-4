#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
const int F = 4;
const int C = 4;

// Función para imprimir la matriz
void imprimirMatriz(int m[F][C]) {
    for (int i = 0; i < F; i++, cout << endl)
        for (int j = 0; j < C; j++)
            cout << m[i][j] << "\t";
}

// Función para llenar la matriz con números aleatorios
void llenarMatriz(int m[F][C]) {
    for (int i = 0; i < F; i++)
        for (int j = 0; j < C; j++)
            m[i][j] = rand() % 99 + 1;
}

// Promedio general
float calcularPromedio(int m[F][C]) {
    int suma = 0;
    for (int i = 0; i < F; i++)
        for (int j = 0; j < C; j++)
            suma += m[i][j];
    return (float)suma / (F * C);
}

// Suma de pares por columna
void sumaParesPorColumna(int m[F][C]) {
    for (int j = 0; j < C; j++) {
        int suma = 0;
        for (int i = 0; i < F; i++)
            suma += (m[i][j] % 2 == 0) ? m[i][j] : 0;  // operador ternario
        cout << "Columna " << j << ": " << suma << endl;
    }
}

// Suma de impares por fila
void sumaImparesPorFila(int m[F][C]) {
    for (int i = 0; i < F; i++) {
        int suma = 0;
        for (int j = 0; j < C; j++)
            suma += (m[i][j] % 2 != 0) ? m[i][j] : 0;
        cout << "Fila " << i << ": " << suma << endl;
    }
}

// Buscar posición del máximo o mínimo (según el parámetro)
void buscarValor(int m[F][C], bool buscarMax) {
    int val = m[0][0], fila = 0, col = 0;
    for (int i = 0; i < F; i++)
        for (int j = 0; j < C; j++)
            if ((buscarMax && m[i][j] > val) || (!buscarMax && m[i][j] < val)) {
                val = m[i][j];
                fila = i;
                col = j;
            }
    cout << (buscarMax ? "Máximo" : "Mínimo") << ": " << val << " en (" << fila << ", " << col << ")\n";
}

// Ordenar fila ascendente
void ordenarFilaAsc(int m[F][C], int fila) {
    for (int i = 0; i < C - 1; i++)
        for (int j = i + 1; j < C; j++)
            if (m[fila][i] > m[fila][j])
                swap(m[fila][i], m[fila][j]);
}

// Ordenar columna descendente
void ordenarColDesc(int m[F][C], int col) {
    for (int i = 0; i < F - 1; i++)
        for (int j = i + 1; j < F; j++)
            if (m[i][col] < m[j][col])
                swap(m[i][col], m[j][col]);
}

// Intercambiar columnas
void intercambiarColumnas(int m[F][C], int col1, int col2) {
    for (int i = 0; i < F; i++)
        swap(m[i][col1], m[i][col2]);
}

int main() {
    srand(time(0));
    int matriz[F][C];

    llenarMatriz(matriz);
    cout << "Matriz original:\n";
    imprimirMatriz(matriz);

    cout << "\n// Promedio general de la matriz\n";
    cout << "Promedio: " << calcularPromedio(matriz) << endl;

    cout << "\n// Suma de pares por columna\n";
    sumaParesPorColumna(matriz);

    cout << "\n// Suma de impares por fila\n";
    sumaImparesPorFila(matriz);

    cout << "\n// Posición del valor máximo\n";
    buscarValor(matriz, true);

    cout << "\n// Posición del valor mínimo\n";
    buscarValor(matriz, false);

    cout << "\n// Ordenar en forma ascendente la fila 2\n";
    ordenarFilaAsc(matriz, 2);
    imprimirMatriz(matriz);

    cout << "\n// Ordenar en forma descendente la columna 3\n";
    ordenarColDesc(matriz, 3);
    imprimirMatriz(matriz);

    cout << "\n// Intercambiar la columna 2 y 4\n";
    intercambiarColumnas(matriz, 1, 3);
    imprimirMatriz(matriz);

    return 0;
}
