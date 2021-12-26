#ifndef PICTURE_H_INCLUDED
#define PICTURE_H_INCLUDED


#include "Line.h"
#include "Rectangle.h"
#include "Circle.h"

class Picture{

    int cNum, rNum, lNum;
    Rectangle *rect;
    Circle *crcl;
    Line *lin;

public:
    Picture();
    Picture(int, int, int, Rectangle *, Circle *, Line *);
    void setRect(int, Rectangle *);
    void setCirc(int, Circle *);
    void setLin(int, Line *);
    void paint();
    ~Picture();


};

#endif // PICTURE_H_INCLUDED

