#include <iostream>
using namespace std;

int main () {
int numero;
cout << "ingresa un numero"; 
cin >> numero;
switch (numero) {
	case 1:
		cout << "El dia " << numero << " representa el dia Lunes. ";
		break;
case 2:
	cout << "El dia " << numero << " representa el dia Martes. ";
	break;
case 3:
	cout << "El dia " << numero << " representa el dia Miercoles. ";
	break;
case 4:
	cout << "El dia " << numero << " representa el dia Jueves. ";
	break;
case 5:
	cout << "El dia " << numero << " representa el dia Viernes. ";
	break;
case 6: 
	cout << "El dia " << numero << " representa el dia Sabado. ";
    break;
case 7:
    cout << "El dia " << numero << " representa el dia Domingo. ";
	break;
default:
	cout << " tienes que ingresar un numero del 1 al 7 ";
	break;
				
}
	}
