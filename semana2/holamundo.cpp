#include <iostream>
/*
- Definición de ambito
- Toda sentencia debe terminar con ;
- Tipado: Tipos de datos deben ser definidos
    Para declarar una variable tengo de indicar 
    * el tipo de dato
    * el nombre de variable
    Para inicializar la variable debo:
    * indicar el nombre, seguido del operador de asignación (=) y el valor que se quiere asignar
*/
using namespace std;

int main() {
    
    int x;
    cout << "Por favor ingrese un numero entero:";
    cin >> x;

    cout << x << endl; 

    return 0;
}
