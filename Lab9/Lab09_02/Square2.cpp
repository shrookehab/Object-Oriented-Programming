#include <iostream>
#include "Rectangle.h"
#include "Square.h"
#include "GeoShape.h"

Square::Square() : Rectangle(){
    std::cout << "This is the Default Square Constructor \n";
}

Square::Square(float dim) : Rectangle(dim, dim){
    std::cout << "This is the Default Square Constructor \n";
}

void Square::setSquareDim(float dim){
    GeoShape::setDim1(dim);
    GeoShape::setDim2(dim);
}

float Square::getSquareDim(){
    return GeoShape::getDim2(dim);
}

void Square::setDim1(float dim){
    setSquareDim(dim);
}

void Square::setDim2(float r){
    setSquareDim(dim);
}

float Square::getDim1();
float Square::getDim2();

float Square::CalculateArea(){
    return getSquareDim() * getSquareDim();
}

Square::~Square(){
    std::cout << "This is the Default Square Destructor \n";
}
