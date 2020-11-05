#include <iostream>

using namespace std;

int main() {

    int arr[] = {4,5,6,3,2,1,7};
    int tam = sizeof(arr) / sizeof(arr[0]);
    int* ptr = &arr[0];
    // ARITMETICA DE PUNTEROS
/*
    for(int i = 0; i < tam+3; i++) {
        cout << ptr << endl;
        cout << *(ptr+i) << endl;
    }
*/

    int i = 0;
	while (i++ < tam)
	{
		cout << *ptr++ << endl;
	}

    // RELACIÓN ENTRE PUNTEROS Y ARREGLOS
    // ==================================

    // El nombre de un arreglo es un PUNTERO CONSTANTE al primer elemento de dicho arreglo.
    //cout << *arr << endl;
    //cout << arr[0] << endl;



}
