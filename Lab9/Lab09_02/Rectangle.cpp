#include <iostream>
#include "GeoShape.h"
#include "Rectangle.h"


Rectangle::Rectangle() : GeoShape(){
    std::cout << "This is the Default Rectangle Constructor \n";
}

Rectangle::Rectangle(float dim1, float dim2) : GeoShape(dim1, dim2){
    std::cout << "This is the Default Rectangle Constructor \n";
}

float Rectangle::CalculateArea(){
    return GeoShape::dim1 * GeoShape::dim2;
}

Rectangle::~Rectangle(){
    std::cout << "This is the Default Rectangle Destructor \n";
}
