#ifndef __POINTARRAY_H__
#define __POINTARRAY_H__

#include <iostream>
#include "Point.h"

class PointArray {

        int size;
        Point *points;
        //void resize(int size);
    public:
        PointArray();
        PointArray(const Point arr[], const int size);
        PointArray(const PointArray &o);
        ~PointArray();

        void clear();
        int getSize() const { return size; }
        void push_back(const Point &p);
        void insert(const int pos, const Point &p);
        void remove(const int pos);

        void print();

};

#endif
