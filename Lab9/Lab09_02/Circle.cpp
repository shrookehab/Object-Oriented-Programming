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
    GeoShape::dim1 = GeoShape::dim2 = r;
}

void Circle::setDim1(float r){
    setRadius(r);
}

void Circle::setDim2(float r){
    setRadius(r);
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
