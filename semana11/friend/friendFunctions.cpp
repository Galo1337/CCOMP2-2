// Friend Functions
// ================
/*
* Una variable miembro privada no puede ser accedida FUERA DE LA CLASE
* Esta regla no se aplica para la "AMISTAD".
*/

// Se utiliza la palabra clave FRIEND

#include <iostream>
using namespace std;

class Rectangle {
        int width, height;
    public:
        Rectangle() {}
        Rectangle(int x, int y) : width(x), height(y) {}

        int area() {
            return width * height;
        }

        friend Rectangle duplicate(const Rectangle &);
};

Rectangle duplicate(const Rectangle &param) {
    Rectangle res;
    res.width = param.width * 2;
    res.height = param.height * 2;
    return res;
}

int main() {
    Rectangle foo;
    Rectangle bar(2, 3);
    foo = duplicate(bar);

    cout << foo.area() << endl;

    return 0;

}
