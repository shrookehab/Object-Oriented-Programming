#include <iostream>
#include "Point.h"
#include "Circle.h"

using namespace std;

Circle::Circle(){
    this->center = Point();
    this->radius = 0;
    cout << "This is the default Constructor of the Circle \n";
}

Circle::Circle(int x, int y, int r){
    this->center = Point(x, y);
    this->radius = r;
     cout << "This is the second Constructor of the Circle \n";
}

void Circle::draw(){
    cout << "\n";
    cout << "This is the circle and its center at x = " << this->center.getX() << " and y = " << this->center.getY()  << " and its radius is : " << this->radius << "\n";

}

Circle::~Circle(){

    cout << "This is the default Destructor of the Circle \n";
}
