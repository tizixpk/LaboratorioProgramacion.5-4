#include <iostream>
#include <cstdlib> // Para rand()
#include <ctime>   // Para time()
using namespace std;

int main() {
    int vector[100];
    int pares = 0, impares = 0, positivos = 0, negativos = 0;

    srand(time(0)); // Semilla para números aleatorios

    for (int i = 0; i < 100; i++) {
        vector[i] = rand() % 201 - 100; // Números entre -100 y 100

        if (vector[i] % 2 == 0) pares++;
        else impares++;

        if (vector[i] > 0) positivos++;
        else if (vector[i] < 0) negativos++;
    }

    cout << "Cantidad de pares: " << pares << endl;
    cout << "Cantidad de impares: " << impares << endl;
    cout << "Cantidad de positivos: " << positivos << endl;
    cout << "Cantidad de negativos: " << negativos << endl;

    return 0;
}
