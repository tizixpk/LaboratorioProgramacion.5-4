---

# Ejercicios C++ – 13/8

---

## Función que convierte un string a mayúscula (RESUELTO EN CLASE)

```cpp
#include <iostream>
#include <cstring> 
using namespace std;

void convertirMayuscula(char cad[]) {
    for (int i = 0; cad[i] != '\0'; i++) {
        cad[i] = toupper(cad[i]); // convierte cada letra a mayúscula hasta el /0 se detiene q seria el final de la cadena
    }
}

int main() {
    char texto[100];
    cout << "Ingrese un texto: ";
    cin.getline(texto, 100);

    convertirMayuscula(texto);
    cout << "Texto en MAYUSCULAS: " << texto << endl;
    return 0;
}
```

---

## Contar la cantidad de vocales en un string

```cpp
#include <iostream>
#include <cstring>
using namespace std;

int contarVocales(char cad[]) {
    int contador = 0;
    for (int i = 0; cad[i] != '\0'; i++) {
        char c = tolower(cad[i]); // paso todo a minúscula
        if (c=='a' || c=='e' || c=='i' || c=='o' || c=='u') {
            contador++;
        }
    }
    return contador;
}

int main() {
    char texto[100];
    cout << "Ingrese un texto: ";
    cin.getline(texto, 100);

    cout << "Cantidad de vocales: " << contarVocales(texto) << endl;
    return 0;
}
```


---

##  Invertir un string

```cpp
#include <iostream>
#include <cstring>
using namespace std;

void invertirCadena(char cad[]) {
    int inicio = 0, fin = strlen(cad) - 1;
    while (inicio < fin) {
        swap(cad[inicio], cad[fin]); // intercambio
        inicio++;
        fin--;
    }
}

int main() {
    char texto[100];
    cout << "Ingrese un texto: ";
    cin.getline(texto, 100);

    invertirCadena(texto);
    cout << "Texto invertido: " << texto << endl;
    return 0;
}
```


---

##  Eliminar espacios en blanco

```cpp
#include <iostream>
#include <cstring>
using namespace std;

void eliminarEspacios(char cad[]) {
    int j = 0;
    for (int i = 0; cad[i] != '\0'; i++) {
        if (cad[i] != ' ') {
            cad[j++] = cad[i]; // copio solo si no es espacio
        }
    }
    cad[j] = '\0'; // fin de cadena
}

int main() {
    char texto[100];
    cout << "Ingrese un texto: ";
    cin.getline(texto, 100);

    eliminarEspacios(texto);
    cout << "Texto sin espacios: " << texto << endl;
    return 0;
}
```


---

#  clase 20/8

---

###  Ejercicio 1

**Verificar longitud de la cadena (si >10 mostrar, si no, no mostrar)**

```cpp
#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char texto[100];
    cout << "ingrese un texto: ";
    cin.getline(texto, 100);

    if (strlen(texto) > 10) { /7 el strlen mide la longitud  de la cadena texto q no sea >10
        cout << "teexto ingresado: " << texto << endl;
    } else {
        cout << "la cadenaa es menor o igual a 10 caracteres, no se muestra." << endl;
    }
    return 0;
}
```


---

###  Ejercicio 2

**Copiar una cadena en otra**

```cpp
#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char texto[100], copia[100];
    cout << "Ingrese un texto: ";
    cin.getline(texto, 100);

    strcpy(copia, texto); // la cadena q ingresa el usuario seria texto [] y con el strcpy lo copio ala cadena copia[]
    cout << "texto copiado aca : " << copia << endl;
    return 0;
}
```



---

### 🔹 Ejercicio 3

**Comparar dos cadenas**

```cpp
#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char cad1[100], cad2[100];
    cout << "Ingrese primera cadena: ";
    cin.getline(cad1, 100);
    cout << "Ingrese segunda cadena: ";
    cin.getline(cad2, 100);

    int cmp = strcmp(cad1, cad2);

    if (cmp == 0) {             // el cmp  guarda el strmp ( si son iguales es 0 y si no 1 o -1)  de la cadena 1 y 2 
        cout << "Las cadenas son IGUALES." << endl;
    } else if (cmp < 0) {
        cout << cad1 << " es menor alfabeticamente que " << cad2 << endl;
    } else {
        cout << cad1 << " es mayor alfabeticamente que " << cad2 << endl;
    }
    return 0;
}
```

