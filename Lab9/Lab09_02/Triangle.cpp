#include <iostream>
#include "GeoShape.h"
#include "Triangle.h"

Triangle::Triangle() : GeoShape(){
    std::cout << "This is the Default Triangle Constructor \n";
}

Triangle::Triangle(float dim1, float dim2) : GeoShape(dim1, dim2){
    std::cout << "This is the Default Triangle Constructor \n";
}

float Triangle::CalculateArea(){
    return 0.5 * GeoShape::dim1 * GeoShape::dim2;
}

Triangle::~Triangle(){
    std::cout << "This is the Default Triangle Destructor \n";
}
