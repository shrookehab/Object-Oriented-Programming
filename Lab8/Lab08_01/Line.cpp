#include <iostream>
#include "Point.h"
#include "Line.h"

using namespace std;

Line::Line() : startP(), endP() {
//    this->startP = Point();
//    this->endP = Point();
    cout << "This is the default Constructor of the Line \n";
}

Line::Line(int x1, int y1, int x2, int y2) : startP(x1, y1), endP(x2, y2) {
//    this->startP = Point(x1, y1);
//    this->endP = Point(x2, y2);
    cout << "This is the second Constructor of the Line \n";
}

void Line::draw(){
    cout << "\n";
    cout << "This is the Line and its start point at x = " << this->startP.getX() << " and y = " << this->startP.getY() << "\n";
    cout << "This is the Line and its end point at x = " << this->endP.getX() << " and y = " << this->endP.getY() << "\n";

}

Line::~Line(){
    cout << "This is the default Destructor of the Line \n";
}
