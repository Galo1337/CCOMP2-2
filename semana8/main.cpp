#include <iostream>
#include "Point.h"

int main() {
    int x = 4;

    // AQUI ESTOY CREANDO UNICAMENTE UNA INSTANCIA DE 
    // TIPO POINT
    Point p(5, 4);
    Point q(6, 5);
    Point r(7, 6);

    int array[] = {1,2,3};

    // SE QUIERE CREAR UN ARREGLO DE POINTS
    Point arrayPoints[] = {p, q, r};
    int tam = sizeof(arrayPoints) / sizeof(arrayPoints[0]); 
    std::cout << tam << std::endl;
    
    for(int i = 0; i < tam; i++)
        arrayPoints[i].print();

}
