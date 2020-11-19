#include <iostream>
#include <string>

using namespace std;

class Vehicle {
    protected:
        string license;
        int year;
    public:
        Vehicle(const string &l, const int y) : license(l), year(y) {}

        const string getDesc() const {
            return license + " from " + std::to_string(year);
        }

        const string getLicense() const {
            return license;
        }

        const int getYear() const {
            return year;
        }
};

// Car ES UN Vehicle
class Car : public Vehicle {

        string style;
    public:
        Car(const string l, const int y, const string s) :
                Vehicle(l, y), style(s) {}

        const string &getStyle() {
            return style;
        }

        const string getDesc() {
            return to_string(year) + " " + style + ": " + license;
        }

};

int main() {

    Car c("vp4-160", 1660, "Deportivo");

    Vehicle *ptr = &c;

    cout << ptr->getDesc() << endl;

    return 0;
}