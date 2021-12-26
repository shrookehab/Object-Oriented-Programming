#include <iostream>
#include "Point.h"
#include "Line.h"
#include "Rectangle.h"
#include "Circle.h"
#include "Picture.h"

using namespace std;

int main()
{

    Picture pic;

    Circle crc[3] = {Circle(50,50,50), Circle(200,100,100), Circle(420,50,30)};
    Rectangle rect[2] = {Rectangle(30,40,170,100), Rectangle(420,50,500,300)};
    Line lin[2] = {Line(420,50,500,300), Line(40,500,500,400)};

    pic.setCirc(3, crc);
    pic.setLin(2, lin);
    pic.setRect(2, rect);
    pic.paint();

//    Line **ln = new Line*[2];
//    ln[0] = new Line[1]{Line(420,50,500,300)};
//    ln[1] = new Line[1]{Line()};
//
//    pic.setLin(2, ln);
//    pic.paint();
//
//    for (int i = 0; i < 2; i++)
//        delete[] ln[i];
//    delete[] ln;


    return 0;
}

