#include <iostream>
#include "GeoShape.h"
#include "Circle.h"
#define PI 22.0/7

Circle::Circle() : GeoShape(){
    std::cout << "This is the Default Circle Constructor \n";
}

Circle::Circle(float r) : GeoShape(r){
    std::cout << "This is the Default Circle Constructor \n";
}

void Circle::setRadius(float r){
    GeoShape::setDim1(r);
    GeoShape::setDim2(r);
}

float Circle::getRadius(){
    return GeoShape::dim1;
}

float Circle::CalculateArea(){
    return PI * GeoShape::dim1 * GeoShape::dim2;
}

Circle::~Circle(){
    std::cout << "This is the Default Circle Destructor \n";
}
