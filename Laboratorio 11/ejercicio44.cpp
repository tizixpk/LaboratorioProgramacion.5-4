#include <iostream>
#include <fstream>
#include <string>
using namespace std;

struct Contacto {
    string nombre;
    string apellidos;
    string telefono;
};

void crearContacto() {
    Contacto c;
    ofstream archivo("agenda.txt");
    cout << "Nombre: "; getline(cin, c.nombre);
    cout << "Apellidos: "; getline(cin, c.apellidos);
    cout << "Telefono: "; getline(cin, c.telefono);
    archivo << c.nombre << "|" << c.apellidos << "|" << c.telefono << endl;
    archivo.close();
    cout << "Contacto creado." << endl;
}

void agregarContacto() {
    Contacto c;
    ofstream archivo("agenda.txt", ios::app);
    cout << "Nombre: "; getline(cin, c.nombre);
    cout << "Apellidos: "; getline(cin, c.apellidos);
    cout << "Telefono: "; getline(cin, c.telefono);
    archivo << c.nombre << "|" << c.apellidos << "|" << c.telefono << endl;
    archivo.close();
    cout << "Contacto agregado." << endl;
}

void visualizarContactos() {
    ifstream archivo("agenda.txt");
    string linea;
    if (!archivo) {
        cout << "No hay contactos guardados." << endl;
        return;
    }
    cout << "\nContactos guardados:\n";
    while (getline(archivo, linea)) {
        cout << linea << endl;
    }
    archivo.close();
}

int main() {
    int opcion;
    do {
        cout << "\nMenu de Agenda Telefonica\n";
        cout << "1. Crear Contacto\n";
        cout << "2. Agregar Contacto\n";
        cout << "3. Visualizar Contactos\n";
        cout << "4. Salir\n";
        cout << "Elija una opcion: ";
        cin >> opcion;
        cin.ignore();

        switch (opcion) {
            case 1: crearContacto(); break;
            case 2: agregarContacto(); break;
            case 3: visualizarContactos(); break;
            case 4: cout << "Saliendo...\n"; break;
            default: cout << "Opcion invalida.\n";
        }
    } while (opcion != 4);

    return 0;
}
