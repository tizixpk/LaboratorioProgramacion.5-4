#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    string nombreArchivo, linea;
    cout << "Ingrese el nombre o ubicacion del archivo: ";
    getline(cin, nombreArchivo);

    ifstream archivo(nombreArchivo);
    if (!archivo) {
        cout << "Error al abrir el archivo." << endl;
        return 1;
    }

    cout << "\nContenido del archivo:\n";
    while (getline(archivo, linea)) {
        cout << linea << endl;
    }

    archivo.close();
    return 0;
}
