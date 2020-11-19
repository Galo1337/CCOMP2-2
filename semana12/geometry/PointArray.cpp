#include "PointArray.h"

PointArray::PointArray() {
    size = 0;
    points = new Point[0];
}

PointArray::PointArray(const Point arr[], const int size) {
    this->size = size;
    this->points = new Point[size];
    for(int i = 0; i < size; i++)
        points[i] = arr[i];
}

PointArray::~PointArray(){
    delete[] points;
}

void PointArray::push_back(const Point &p) {
    this->size += 1;
    Point *temp = new Point[size];
    for(int i = 0; i < size-1; i++)
        temp[i] = points[i];
    temp[size-1] = p;
    delete[] points;
    points = temp;
}

void PointArray::insert(const int pos, const Point &p) {
    this->size += 1;
    Point *temp = new Point[size];
    for(int i = 0, j = 0; i < size; i++, j++) {
        if(i == pos && i == j) {
            temp[j] = p;
            j--;
        } else {
            temp[i] = points[j];
        }
    }
    delete[] points;
    points = temp;
}

void PointArray::remove(const int pos) {
    this->size -= 1;
    Point *temp = new Point[size];

    for(int i = 0, j = 0; i < size+1; i++, j++) {
        if(i == pos) {
            j--;
        }
        else {
            temp[j] = points[i];
        }
    }

    delete[] points;
    points = temp;
}


void PointArray::print() {
    std::cout << "[ ";
    for(int i = 0; i < size; i++) {
        points[i].print();
        std::cout << " ";
    }
    std::cout << " ]" << std::endl;
}