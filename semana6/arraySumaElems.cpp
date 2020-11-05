#include <iostream>
using namespace std;
// Un arreglo por defecto cuando se pasa como argumento a una función, se pasa como referencia.
int sumar(const int array[], const int tam) {
    long sum = 0;
    for(int i = 0; i < tam; sum += array[i++]);
    return sum;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int tam = sizeof(arr)/sizeof(arr[0]);

    cout << "Suma de elementos: " << sumar(arr, tam) << endl;
    return 0;
}