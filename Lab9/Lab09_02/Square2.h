#ifndef SQUARE2_H_INCLUDED
#define SQUARE2_H_INCLUDED

#include "Rectangle.h"

class Square2 : public Rectangle{
public:
    Square();
    Square(float);
    void setSquareDim(float);
    float getSquareDim();
    void setDim1(float);
    void setDim2(float);
    float getDim1();
    float getDim2();
    float CalculateArea();
    ~Square();


};

#endif // SQUARE2_H_INCLUDED
