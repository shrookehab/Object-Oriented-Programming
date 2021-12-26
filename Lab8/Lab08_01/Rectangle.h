#ifndef RECTANGLE_H_INCLUDED
#define RECTANGLE_H_INCLUDED

#include "Point.h"

class Rectangle{
    Point ul;
    Point lr;

public:
    Rectangle();
    Rectangle(int, int, int, int);
    void draw();
    ~Rectangle();


};

#endif // RECTANGLE_H_INCLUDED


