#include <iostream>

using namespace std;

/*
* PUNTERO THIS
* ============
* Puntero especial que existe dentro de una clase.
* Es un puntero a la instancia actual.
*/

class Integer {
    private:
        int val;
    public:
        Integer(int val = 0) {
            this->val = val;
        }
        int getVal() {
            return this->val;
        }
        void setVal(int val) {
            this->val = val;
        }
};

int main() {
    // PUNTEROS Y CLASES
    Integer i;
    Integer *ptr = &i;

    cout << i.getVal() << endl;
    cout << (*ptr).getVal() << endl;
    cout << ptr->getVal() << endl;

}



