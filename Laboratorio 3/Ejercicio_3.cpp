#include <iostream>
#include <cstdlib>  
#include <ctime>    
using namespace std;
int main() {
    int vector[100];
    int x, contador = 0;
    srand(time(0));
    for (int i = 0; i < 100; i++) {
        vector[i] = rand() % 100 + 1;
    }
    cout << "Vectores generado:";
    for (int i = 0; i < 100; i++) {
        cout << vector[i] << " ";
    }
    cout << endl;
    cout << "\nIngrese el número a buscar: ";
    cin >> x;
    for (int i = 0; i < 100; i++) {
        if (vector[i] == x) {
            contador++;
        }
    }    if (contador > 0) {
        cout << "El número " << x << " aparece " << contador << " veces en el vector." << endl;
    } else {
        cout << "El número " << x << " no se encuentra en el vector." << endl;
    }
    return 0;
}
