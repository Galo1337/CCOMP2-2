#include <iostream>

using namespace std;

class ClaseD {
    private:
        void functionP() {
            cout << "Función de la clase P" << endl;
        }
    protected:
        int dato;        
    public:
        //ClaseD(int x) { cout<<"Clase D "<< x <<endl; } 
        //ClaseD() { cout<<"Clase D"<<endl; } 
        void functionD() {
            cout << "Función de la clase D" << endl;
        }
};

class ClaseA : virtual public ClaseD {
    public:
        //ClaseA(int x) : ClaseD(x) { cout<<"Clase B "<<endl; } 
        void functionA() {
            cout << "Función de la clase A" << endl;
        }
        void functionZ() {
            cout << "Función de la clase Z  " << endl;
        }
};

class ClaseB : virtual public ClaseD {
    public:
        //ClaseB(int x) : ClaseD(x) { cout<<"Clase B"<<endl; } 
        void functionB() {
            cout << "Función de la clase B" << endl;
        }
        
};

class ClaseC : public ClaseA, public ClaseB {
    public:
        //ClaseC(int x) : ClaseA(x), ClaseB(x){cout<<"Clase C" << endl;}
        void metodo() {
            dato = 1;
        }
};

/*
* REVISAR EL PROBLEMA DEL DIAMANTE Y SU SOLUCIÓN
*/

int main() {
    ClaseC c;
    c.functionA();
    c.functionB();
    c.functionZ();
    
}

