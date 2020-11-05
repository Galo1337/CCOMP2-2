#include <iostream>

using namespace std;

int main() {

    /**
     ** Si se va a trabajar con valores enteros:
       - short
       - int
       - long
       - long long
     ** Demales:
        - float
        - double
    **/

   /**
    ** short : tamaño es 2 bytes
    ** ¿Cuál será el máximo valor que puede almacenar una variable de tipo short? 
   */

    unsigned short x = 65535;
    cout << sizeof(x) << " bytes." << endl;
    cout << x << endl;
    x = x + 1;
    cout << x << endl;

    return 0;
}
