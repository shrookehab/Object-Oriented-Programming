#ifndef CIRCLE_H_INCLUDED
#define CIRCLE_H_INCLUDED

#include "Point.h"

class Circle{
    Point center;
    int radius;

public:
    Circle();
    Circle(int, int, int);
    void draw();
    ~Circle();


};


#endif // CIRCLE_H_INCLUDED
