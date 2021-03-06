#ifndef __POINT_H__
#define __POINT_H__

#include <iostream>

class Point {
        int x, y;
    public:
        Point(int _x = 0, int _y = 0) {
            x = _x;
            y = _y;
        }

        int getX() const {
            return x;
        }
        int getY() const {
            return y;
        }
        void setX(const int _x) {
            x = _x;
        }
        void setY(const int _y) {
            y = _y;
        }

        void print() {
            std::cout << "(" << x << "," << y << ")";
        }

};

#endif
