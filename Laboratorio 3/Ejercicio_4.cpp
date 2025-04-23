#include <iostream>
#include <cstdlib>  
#include <ctime>    
using namespace std;
int main() {
    int Alturas_Alumnos = 0, Promedio, Alumnos = 0;
    srand(time(0));
    cout << "cant de alumnos ; ";
    cin >> Alumnos;
     int vector[Alumnos];
    for (int i = 0; i < Alumnos; i++) {
        vector[i] = rand() % 60 + 141;
         Alturas_Alumnos += vector[i];
    }
    cout << "Alturas generadas:";
    for (int i = 0; i < Alumnos; i++) {
        cout << vector[i] << " "; 
    }
    Promedio = Alturas_Alumnos / Alumnos;
    cout << "Promedio" << Promedio;
    cout << endl;
    return 0;
}
