#ifndef TRIANGLE_H_INCLUDED
#define TRIANGLE_H_INCLUDED

#include "GeoShape.h"

class Triangle : public GeoShape{
public:
    Triangle();
    Triangle(float, float);
    float CalculateArea();
    ~Triangle();
};

#endif // TRIANGLE_H_INCLUDED
