#include <iostream>
using namespace std;
int main() {
	const int ENTRADA = 7;
	int edad;
	int precio;
	cout << "Cine Valores De Funciones";
	cout << "Ingresa tu edad y te diremos el precio.";
	cin >> edad;
	if ( edad  < 5) {
	 precio =	(ENTRADA * 0.4 );
		cout << "el precio es " << precio;
	}
	else if ( edad > 60 ) {
		precio = (ENTRADA * 0.45);
		cout << "el precio es " << precio;
	}
  else {
    cout << "el precio es " << ENTRADA;
	return 0;

	}
}
