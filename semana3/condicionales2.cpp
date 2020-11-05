#include <iostream>

using namespace std;

int main() {
    
    // todo caracter tiene un valor entero asociado
    // ASCII
    char caracter; 
    cout << "Ingrese un caracter: ";
    cin >> caracter;

    int valor_caracter = static_cast<int>(caracter);

    if (valor_caracter >= 48 && valor_caracter <= 57)
        cout << "Es un numero" << endl;
    else
        cout << "No es un numero" << endl;

    return 0;
}
