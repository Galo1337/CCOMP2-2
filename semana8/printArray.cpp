#include <iostream>

using namespace std;

void printArray(int arr[], int start, int end) {
    if(start == end) {
        cout << arr[start] << " ";
        return;
    }
    cout << arr[start] << " ";
    printArray(arr, start+1, end);
}

int main() {
    int array[] = {2};

    int tam = sizeof(array)/sizeof(array[0]);

    printArray(array, 0, tam-1);
    cout << endl;

    return 0;
}