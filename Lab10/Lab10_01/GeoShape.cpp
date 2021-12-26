#include <iostream>
#include "GeoShape.h"


GeoShape::GeoShape(){
    this->dim1 = this->dim2 = 0;
    std::cout << "This is the Default GeoShape Constructor \n";
}

GeoShape::GeoShape(float dim){
    this->dim1 = this->dim2 = dim;
    std::cout << "This is the Second GeoShape Constructor \n";

}

GeoShape::GeoShape(float dim1, float dim2){
    this->dim1 = dim1;
    this->dim2 = dim2;
    std::cout << "This is the Third GeoShape Constructor \n";

}

void GeoShape::setDim1(float dim1){
    this->dim1 = dim1;
}

void GeoShape::setDim2(float dim2){
    this->dim2 = dim2;
}

float GeoShape::getDim1(){
    return this->dim1;
}

float GeoShape::getDim2(){
    return this->dim2;
}


GeoShape::~GeoShape(){
    std::cout << "This is the Default GeoShape Destructor \n";
}
