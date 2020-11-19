#include <iostream>
#include "PointArray.h"
#include "Point.h"

using namespace std;

int main() {
    Point a(6, 5);
    Point b(3, 4);
    Point c(0, 4);

    Point arr[] = {a, b ,c};
    int tam = sizeof(arr) / sizeof(arr[0]);

    PointArray pointArr(arr, tam);

    pointArr.print();
    pointArr.push_back(a);

    pointArr.print();

    pointArr.insert(2, b);
    pointArr.print();

    pointArr.insert(4, b);
    pointArr.print();

    pointArr.remove(2);
    pointArr.print();
    pointArr.remove(2);
    pointArr.print();
}
