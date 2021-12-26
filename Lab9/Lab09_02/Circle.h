#ifndef CIRCLE_H_INCLUDED
#define CIRCLE_H_INCLUDED

#include "GeoShape.h"

class Circle : public GeoShape{
public:
    Circle();
    Circle(float);
    void setRadius(float);
    float getRadius();
    void setDim1(float);
    void setDim2(float);
    virtual float CalculateArea();
    ~Circle();


};

#endif // CIRCLE_H_INCLUDED
