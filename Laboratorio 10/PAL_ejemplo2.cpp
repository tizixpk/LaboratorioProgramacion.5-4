// PAL_ejemplo2.cpp
#include <iostream>
#include <fstream>
#include <iomanip>
#include <cstring>

using namespace std;

struct Cliente {
    int cuenta;
    char nombre[100];
    double saldo;
};

int main() {
    ifstream archivo("cliente.txt");
    if (!archivo) {
        cout << "No se puede abrir cliente.txt (no existe o error).\n";
        return 1;
    }

    Cliente c;
    int total = 0;
    cout << left << setw(10) << "Cuenta" << setw(35) << "Nombre" << setw(12) << "Saldo" << "\n";
    cout << string(60, '-') << "\n";

    string linea;
    while (true) {
        // Leer linea con numero de cuenta
        if (!getline(archivo, linea)) break;
        if (linea.size() == 0) continue;
        c.cuenta = atoi(linea.c_str());

        // Leer nombre
        if (!getline(archivo, linea)) break;
        strncpy(c.nombre, linea.c_str(), sizeof(c.nombre)-1);
        c.nombre[sizeof(c.nombre)-1] = '\0';

        // Leer saldo
        if (!getline(archivo, linea)) break;
        c.saldo = atof(linea.c_str());

        cout << setw(10) << c.cuenta << setw(35) << c.nombre << fixed << setprecision(2) << setw(12) << c.saldo << "\n";
        ++total;
    }

    archivo.close();
    cout << "\nTotal de clientes leídos: " << total << "\n";
    return 0;
}
