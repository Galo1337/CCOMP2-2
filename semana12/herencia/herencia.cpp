#include <iostream>
#include <string>

using namespace std;

// Si la clase tiene un FUNCIÓN VIRTUAL PURA
// entonces, la clase es ABSTRACTA
// Si la clase es abstracta, no puede tener instancias.
class Vehicle {
    protected:
        string license;
        int year;
    public:
        Vehicle(const string &l, const int y) : license(l), year(y) {}

        // FUNCIÓN VIRTUAL PURA
        virtual const string getDesc() const = 0;

        const string getLicense() const {
            return license;
        }

        const int getYear() const {
            return year;
        }
};

class Car : public Vehicle {

        string style;
    public:
        Car(const string l, const int y, const string s) :
                Vehicle(l, y), style(s) {}
        const string &getStyle() {
            return style;
        }

        const string getDesc() const {
            return to_string(year) + " " + style + ": " + license;
        }

};

class Truck : public Vehicle {

        string capacity;
    public:
        Truck(const string l, const int y, const string c) :
                Vehicle(l, y), capacity(c) {}
        const string &getCapacity() {
            return capacity;
        }

        const string getDesc() const {
            return to_string(year) + " " + capacity + ": " + license;
        }

};

int main() {

    Car c("vp4-160", 1660, "Deportivo");
    Truck t("vp4-160", 1660, "20Tn");
    
    Vehicle *ptr = &c;
    Vehicle& ref = c;

    cout << ptr->getDesc() << endl;
    cout << ref.getDesc() << endl;

    ptr = &t;
    ref = t;

    cout << ptr->getDesc() << endl;
    cout << ref.getDesc() << endl;

    return 0;
}