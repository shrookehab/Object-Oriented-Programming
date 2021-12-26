#ifndef SQUARE_H_INCLUDED
#define SQUARE_H_INCLUDED

#include "Rectangle.h"

class Square : public Rectangle{
public:
    Square();
    Square(float);
    void setSquareDim(float);
    float getSquareDim();
    void setDim1(float);
    void setDim2(float);
    float CalculateArea();
    ~Square();


};


#endif // SQUARE_H_INCLUDED
