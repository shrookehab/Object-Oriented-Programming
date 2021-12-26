#include <iostream>
#include "Point.h"

using namespace std;

Point::Point(){
    this->x = 0;
    this->y = 0;
    cout << "This is the default Constructor of the Point \n";
}

Point::Point(int x, int y){
    this->x = x;
    this->y = y;
    cout << "This is the second Constructor of the Point \n";
}

void Point::setX(int x){
    this->x = x;
}

void Point::setY(int y){
    this->y = y;
}

int Point::getX(){
    return this->x;
}

int Point::getY(){
    return this->y;
}

Point::~Point(){
    cout << "This is the default Destructor of the Point \n";
}
