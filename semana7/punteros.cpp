#include <iostream>

using namespace std;

// Este intercambio es usando PASO POR REFERENCIA 
void intercambio(int &x, int &y) {
    int temp = x;
    x = y;
    y = temp;
}

// Haciendo el intercambio usando PASO POR REFERENCIA USANDO PUNTEROS
//                                                    ===============
void intercambioConPtrs(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main() {

    int a = 10;
    int b = 16;
    intercambioConPtrs(&a, &b);

    cout << a << endl;
    cout << b << endl;

    return 0;
}

