#ifndef RECTANGLE_H_INCLUDED
#define RECTANGLE_H_INCLUDED

#include "GeoShape.h"

class Rectangle : public GeoShape{
public:
    Rectangle();
    Rectangle(float, float);
    virtual float CalculateArea();
    ~Rectangle();


};


#endif // RECTANGLE_H_INCLUDED
