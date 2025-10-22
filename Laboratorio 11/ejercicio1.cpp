#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    string nombreArchivo, frase;
    cout << "Ingrese el nombre del archivo: ";
    getline(cin, nombreArchivo);
    
    ofstream archivo(nombreArchivo);
    if (!archivo) {
        cout << "Error al crear el archivo." << endl;
        return 1;
    }

    cout << "Escriba frases (escriba 'salir' para terminar):" << endl;
    while (true) {
        getline(cin, frase);
        if (frase == "salir") break;
        archivo << frase << endl;
    }

    archivo.close();
    cout << "Datos almacenados en " << nombreArchivo << endl;
    return 0;
}
