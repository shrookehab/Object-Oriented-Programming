#include <iostream>
#include "Point.h"
#include "Rectangle.h"

using namespace std;

Rectangle::Rectangle() : ul(), lr(){
//    this->ul = Point();
//    this->lr = Point();
    cout << "This is the default Constructor of the Rectangle \n";
}

Rectangle::Rectangle(int x1, int y1, int x2, int y2) : ul(x1, y1), lr(x2, y2){
//    this->ul = Point(x1, y1);
//    this->lr = Point(x2, y2);
    cout << "This is the second Constructor of the Rectangle \n";
}

void Rectangle::draw(){
    cout << "\n";
    cout << "This is the Rectangle and its start point at x = " << this->ul.getX() << " and y = " << this->ul.getY() << "\n";
    cout << "This is the Rectangle and its end point at x = " << this->lr.getX() << " and y = " << this->lr.getY() << "\n";

}

Rectangle::~Rectangle(){
    cout << "This is the default Destructor of the Rectangle \n";
}

