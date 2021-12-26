#include <iostream>
#include "Rectangle.h"
#include "Square.h"

Square::Square() : Rectangle(){
    std::cout << "This is the Default Square Constructor \n";
}

Square::Square(float dim) : Rectangle(dim, dim){
    std::cout << "This is the Default Square Constructor \n";
}

void Square::setSquareDim(float dim){
    this->dim1 = this->dim2 = dim;
}

float Square::getSquareDim(){
    return this->dim1;
}

void Square::setDim1(float dim){
    setSquareDim(dim);
}

void Square::setDim2(float dim){
    setSquareDim(dim);
}


float Square::CalculateArea(){
    return getSquareDim() * getSquareDim();
}

Square::~Square(){
    std::cout << "This is the Default Square Destructor \n";
}
