#include <iostream>
using namespace std;

int main() {
    char c;
    cout << "Ingrese un carácter: ";
    cin >> c;

    // Usando switch
    switch (c) {
        case 'a': case 'e': case 'i': case 'o': case 'u':
        case 'A': case 'E': case 'I': case 'O': case 'U':
            cout << "Es una vocal." << endl;
            break;
        default:
            cout << "No es una vocal." << endl;
    }

    // Usando if
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
        c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
        cout << "Es una vocal." << endl;
    } else {
        cout << "No es una vocal." << endl;
    }

    return 0;
}
