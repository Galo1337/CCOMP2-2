#include <iostream>

using namespace std;

void incremento( int &a ) {
    a = a + 1;
    cout << "a dentro de la funcion incremento es : " << a << endl;
}

void swap(int &q, int &r)
{       // q = 3     r = 5
	int temp = q;   // temp = 3
	q = r;          // q = 5
	r = temp;       // r = 3
}

int main() {
    /*int q = 3;
	int r = 5;
	
	swap(q, r);
	
	cout << "q " << q << endl;
	cout << "r " << r << endl;*/

    int x = 100;
    int &ref = x; // crear una referencia es como asignarle otro nombre a la variable.

    x++;

    cout << ref << endl;

}

