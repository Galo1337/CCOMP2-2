#include <iostream>

using namespace std;

void recorrer(int *arr, int tam)
{
	for (int i = 0; i < tam; i++) {
		cout << *arr++ << endl;
	}
}

// recorrer de forma recursiva
void rec_recorrer(int *arr, int tam) {
    if (tam == 0){ // CASO BASEEEEEEEEEEEEE
        cout << endl;
        return;
    }
    cout << *arr << " ";
    rec_recorrer(++arr, --tam); // PASO RECURSIVO
}

void swap(int *ptr1, int *ptr2) {
    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}

int main()
{
    int a = 10;
    int* ptr_a = &a;
    int b = *ptr_a * *ptr_a;

    // EL NOMBRE DE UN ARREGLO ES UN PUNTERO (es la dirección del primer elemento) 
    // A LA PRIMERA POSICIÓN DEL ARREGLO.
	int arr[] = { 0,1,2,3,4 };
	int tam = sizeof(arr) / sizeof(arr[0]);
	
    int* ptr_ini = arr;
    int* ptr_fin = arr + tam - 1;

    // for(int i = 0; i < tam/2; i++)
    while(ptr_ini < ptr_fin)
        swap(ptr_ini++, ptr_fin--);
c
    rec_recorrer(arr, tam);

	return 0;
}
