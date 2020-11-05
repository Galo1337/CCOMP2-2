#include <iostream>

using namespace std;

class Integer {
    public:
        int val;    // VARIABLE MIEMBRO

        /*
        * Un método que se INVOCA automáticamente cuando se crea una instancia
        * TIENE EL MISMO NOMBRE QUE LA CLASE
        * NO TIENE TIPO DE RETORNO
        */
        explicit Integer(int v = 0) {     // Constructor por defecto
            val = v;
            cout << "Constructor con argumento" << endl;
        }
};

int main() {
    // Creando una instancia de tipo Integer
    Integer i(4);
    Integer j;
    
    Integer arr[2] = {Integer(2), Integer(4)};
    Integer arr2[2];

    /*Integer j;
    cout << i.val << endl;
    cout << j.val << endl;*/
}

