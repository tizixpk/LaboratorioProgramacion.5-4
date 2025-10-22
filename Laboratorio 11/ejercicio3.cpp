#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    string nombreArchivo, frase;
    cout << "Ingrese el nombre o ubicacion del archivo: ";
    getline(cin, nombreArchivo);

    ofstream archivo(nombreArchivo, ios::app);
    if (!archivo) {
        cout << "Error al abrir el archivo." << endl;
        return 1;
    }

    cout << "Escriba frases para agregar (escriba 'salir' para terminar):" << endl;
    while (true) {
        getline(cin, frase);
        if (frase == "salir") break;
        archivo << frase << endl;
    }

    archivo.close();
    cout << "Texto agregado correctamente." << endl;
    return 0;
}
