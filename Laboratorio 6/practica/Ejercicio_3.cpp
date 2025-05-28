#include <iostream>
using namespace std;
char Ejercicio_3(int numero) {
    return (numero % 2 == 0) ? 'p' : 'i';
}
int main() {
    int n;
    cout << "Ingresá un número entero: ";
    cin >> n;
    cout << "Resultado: " << Ejercicio_3(n) << endl;
    return 0;
}
