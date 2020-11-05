#include <iostream>

using namespace std;
// INVERTIR LOS ELEMENTOS DEL ARREGLO
int main() {
      
      int num[] = {1, 2, 3, 4, 5, 6};
      int tam = sizeof(num)/sizeof(num[0]);
      int temp;
      for(int i = 0; i < tam/2; i++) {
            temp = num[ i ];
            num[ i ] = num[tam - i -1];
            num[tam - i - 1] = temp;
      }

      for (int i = 0; i < tam; i++)
      {
            cout << num[i] << " ";
      }

      return 0;
}