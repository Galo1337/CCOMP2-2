#include <iostream>

using namespace std;

int main() {
    
    int x;
    int y;
    cout << "Por favor ingrese un numero entero: ";
    cin >> x;
    cout << "Por favor ingrese otro numero entero: ";
    cin >> y;

    // ¿Cuál es el mayor?
    bool value = (x > y);
    if ( !value )  {
        cout<< y << " es mayor" << endl;
    } else {
        cout<< x << " es mayor" << endl;
    }

    /**
     ** Implemente un programa que solicite un número y 
     ** retorne si dicho número representa un año bisiesto.
     ** Nivel: easy
     **/

    return 0;
}
