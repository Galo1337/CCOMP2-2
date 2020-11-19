#include <iostream>
#include "PointArray.h"
#include "Point.h"

using namespace std;

int main() {
    Point a(6, 5);
    Point b(3, 4);
    Point c(0, 4);

    Point z = a + b;
    
    cout << z << endl;
}
