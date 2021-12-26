#ifndef CIRCLE2_H_INCLUDED
#define CIRCLE2_H_INCLUDED

#include "GeoShape.h"

class Circle : private GeoShape{
public:
    Circle();
    Circle(float);
    void setRadius(float);
    float getRadius();
    float CalculateArea();
    ~Circle();




#endif // CIRCLE2_H_INCLUDED
