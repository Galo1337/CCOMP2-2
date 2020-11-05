#include <iostream>
#include "Estudiante.h"

using namespace std;

int main() {

    Estudiante* ptr = new Estudiante(165487, "Jhoel", 'M', "Ciencia de la Computacion", 18);

    Estudiante est_2(165488, "Italo", 'M', "Ciencia de la Computacion", 17);
    
    
    Estudiante est_3(165489, "Rodrigo", 'M', "Ciencia de la Computacion", 18);

    delete ptr;

    /*
    Estudiante arrayEst[] = {est_1, est_2, est_3};

    int tam = sizeof(arrayEst) / sizeof(arrayEst[0]);

    cout << tam << endl;

    Estudiante *ptr = arrayEst;

    est_1.setNombre("Galo");
    // el puntero ptr a que elemento del arreglo arrayEst apunta?  -> Jhoel

    for(int i = 0; i < tam; i++, ptr++)
        cout << ptr->getName() << endl;
    */
}
