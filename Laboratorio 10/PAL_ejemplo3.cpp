// PAL_ejemplo3.cpp
#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <cstring>
#include <iomanip>

using namespace std;

struct Empleado {
    char nombre[50];
    int edad;
    float salario;
};

// Prototipos
void cargarDesdeArchivo(vector<Empleado> &vec, const string &archivo);
void guardarEnArchivo(const vector<Empleado> &vec, const string &archivo);
void mostrarEmpleados(const vector<Empleado> &vec);
void agregarEmpleado(vector<Empleado> &vec);
void modificarEmpleado(vector<Empleado> &vec); // función pedida en la guía
void eliminarEmpleado(vector<Empleado> &vec);
int pedirEntero(const string &msg);
float pedirFloat(const string &msg);
string pedirLinea(const string &msg);

// Implementaciones
void cargarDesdeArchivo(vector<Empleado> &vec, const string &archivo) {
    vec.clear();
    ifstream f(archivo, ios::binary);
    if (!f) return; // si no existe, no hay nada que cargar
    Empleado e;
    while (f.read(reinterpret_cast<char*>(&e), sizeof(Empleado))) {
        vec.push_back(e);
    }
    f.close();
}

void guardarEnArchivo(const vector<Empleado> &vec, const string &archivo) {
    ofstream f(archivo, ios::binary | ios::trunc);
    if (!f) {
        cout << "No se pudo abrir " << archivo << " para escribir.\n";
        return;
    }
    for (const auto &e : vec) f.write(reinterpret_cast<const char*>(&e), sizeof(Empleado));
    f.close();
}

void mostrarEmpleados(const vector<Empleado> &vec) {
    cout << "\n--- Empleados (" << vec.size() << ") ---\n";
    if (vec.empty()) {
        cout << "(sin registros)\n";
        return;
    }
    cout << left << setw(4) << "#" << setw(30) << "Nombre" << setw(6) << "Edad" << setw(10) << "Salario" << "\n";
    cout << string(55, '-') << "\n";
    for (size_t i = 0; i < vec.size(); ++i) {
        cout << setw(4) << i+1
             << setw(30) << vec[i].nombre
             << setw(6) << vec[i].edad
             << fixed << setprecision(2) << setw(10) << vec[i].salario << "\n";
    }
}

void agregarEmpleado(vector<Empleado> &vec) {
    Empleado e;
    string nom = pedirLinea("Ingrese nombre: ");
    strncpy(e.nombre, nom.c_str(), sizeof(e.nombre)-1);
    e.nombre[sizeof(e.nombre)-1] = '\0';
    e.edad = pedirEntero("Ingrese edad: ");
    e.salario = pedirFloat("Ingrese salario: ");
    vec.push_back(e);
    cout << "Empleado agregado.\n";
}

void modificarEmpleado(vector<Empleado> &vec) {
    if (vec.empty()) {
        cout << "No hay empleados para modificar.\n";
        return;
    }
    mostrarEmpleados(vec);
    int idx = pedirEntero("Numero de empleado a modificar (0 para cancelar): ");
    if (idx == 0) {
        cout << "Operación cancelada.\n";
        return;
    }
    if (idx < 1 || static_cast<size_t>(idx) > vec.size()) {
        cout << "Indice invalido.\n";
        return;
    }
    int pos = idx - 1;
    cout << "\nEmpleado seleccionado:\n";
    cout << "Nombre: " << vec[pos].nombre << "\nEdad: " << vec[pos].edad << "\nSalario: " << vec[pos].salario << "\n";

    cout << "\nDeje en blanco si no desea cambiar un campo.\n";
    string nuevoNombre = pedirLinea("Nuevo nombre: ");
    if (!nuevoNombre.empty()) {
        strncpy(vec[pos].nombre, nuevoNombre.c_str(), sizeof(vec[pos].nombre)-1);
        vec[pos].nombre[sizeof(vec[pos].nombre)-1] = '\0';
    }

    cout << "Nueva edad (ENTER para no cambiar): ";
    string linea;
    getline(cin, linea);
    if (!linea.empty()) {
        int ne = atoi(linea.c_str());
        if (ne > 0) vec[pos].edad = ne;
    }

    cout << "Nuevo salario (ENTER para no cambiar): ";
    getline(cin, linea);
    if (!linea.empty()) {
        float ns = static_cast<float>(atof(linea.c_str()));
        vec[pos].salario = ns;
    }

    cout << "Empleado modificado correctamente.\n";
}

void eliminarEmpleado(vector<Empleado> &vec) {
    if (vec.empty()) {
        cout << "No hay empleados para eliminar.\n";
        return;
    }
    mostrarEmpleados(vec);
    int idx = pedirEntero("Numero de empleado a eliminar (0 para cancelar): ");
    if (idx == 0) {
        cout << "Operación cancelada.\n";
        return;
    }
    if (idx < 1 || static_cast<size_t>(idx) > vec.size()) {
        cout << "Indice invalido.\n";
        return;
    }
    vec.erase(vec.begin() + (idx - 1));
    cout << "Empleado eliminado.\n";
}

// Helpers
int pedirEntero(const string &msg) {
    while (true) {
        cout << msg;
        string s;
        getline(cin, s);
        if (s.empty()) return 0;
        bool ok = true;
        for (char c : s) if (!(c=='-' || isdigit((unsigned char)c))) { ok = false; break; }
        if (ok) return atoi(s.c_str());
        cout << "Valor invalido. Intente de nuevo.\n";
    }
}

float pedirFloat(const string &msg) {
    while (true) {
        cout << msg;
        string s;
        getline(cin, s);
        if (s.empty()) return 0.0f;
        char *endp = nullptr;
        float v = strtof(s.c_str(), &endp);
        if (endp != s.c_str() && *endp == '\0') return v;
        cout << "Valor invalido. Intente de nuevo.\n";
    }
}

string pedirLinea(const string &msg) {
    cout << msg;
    string s;
    getline(cin, s);
    return s;
}

// MAIN
int main() {
    const string ARCH = "empleados.dat";
    vector<Empleado> empleados;
    cargarDesdeArchivo(empleados, ARCH);

    while (true) {
        cout << "\n--- MENU - Empleados ---\n";
        cout << "1) Mostrar empleados\n";
        cout << "2) Agregar empleado\n";
        cout << "3) Modificar empleado\n";
        cout << "4) Eliminar empleado\n";
        cout << "5) Guardar en archivo\n";
        cout << "0) Salir\n";
        int op = pedirEntero("Opcion: ");
        switch (op) {
            case 1: mostrarEmpleados(empleados); break;
            case 2: agregarEmpleado(empleados); break;
            case 3: modificarEmpleado(empleados); break;
            case 4: eliminarEmpleado(empleados); break;
            case 5: guardarEnArchivo(empleados, ARCH); cout << "Guardado en " << ARCH << "\n"; break;
            case 0:
                {
                    string r;
                    cout << "Guardar cambios antes de salir? (s/n): ";
                    getline(cin, r);
                    if (!r.empty() && (r[0]=='s' || r[0]=='S')) {
                        guardarEnArchivo(empleados, ARCH);
                        cout << "Guardado. Saliendo...\n";
                    } else {
                        cout << "Saliendo sin guardar...\n";
                    }
                }
                return 0;
            default: cout << "Opcion invalida.\n"; break;
        }
    }

    return 0;
}
