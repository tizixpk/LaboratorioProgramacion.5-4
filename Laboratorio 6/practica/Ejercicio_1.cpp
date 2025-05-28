#include <iostream>
using namespace std;
int Ejercicio_1(int x, int y) {
    return x > y ? x : y;
}
int main() {
    int a, b;
    cout << "Ingresa dos números enteros: ";
    cin >> a >> b;
    cout << "Mayor: " << Ejercicio_1(a, b) << endl;
    return 0;
}
