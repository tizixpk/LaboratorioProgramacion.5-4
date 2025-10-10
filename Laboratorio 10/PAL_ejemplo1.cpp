// PAL_ejemplo1.cpp
#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

int main() {
    ofstream archivo("cliente.txt", ios::app);
    if (!archivo) {
        cout << "No se pudo abrir cliente.txt para escritura.\n";
        return 1;
    }

    int n;
    cout << "Cantidad de clientes a ingresar: ";
    cin >> n;
    cin.ignore(); // limpiar buffer

    for (int i = 0; i < n; ++i) {
        int cuenta;
        char nombre[100];
        double saldo;

        cout << "\nCliente #" << i+1 << "\n";
        cout << "Numero de cuenta: ";
        cin >> cuenta; cin.ignore();
        cout << "Nombre: ";
        cin.getline(nombre, 100);
        cout << "Saldo: ";
        cin >> saldo; cin.ignore();

        // Formato simple: cuenta \n nombre \n saldo \n
        archivo << cuenta << "\n";
        archivo << nombre << "\n";
        archivo << saldo << "\n";
    }

    archivo.close();
    cout << "\nDatos guardados en cliente.txt\n";
    return 0;
}
