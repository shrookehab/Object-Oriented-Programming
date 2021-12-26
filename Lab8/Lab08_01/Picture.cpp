#include <iostream>
#include "Line.h"
#include "Rectangle.h"
#include "Circle.h"
#include "Picture.h"

using namespace std;

Picture::Picture(){
    this->cNum = 0;
    this->rNum = 0;
    this->lNum = 0;
    this->crcl = NULL;
    this->lin = NULL;
    this->rect = NULL;
    cout << "This is the default Constructor of the Picture \n";
}

Picture::Picture(int cNum, int rNum, int lNum, Rectangle * rect, Circle *crcl, Line *lin){
    this->cNum = cNum;
    this->rNum = rNum;
    this->lNum = lNum;
    this->crcl = crcl;
    this->lin = lin;
    this->rect = rect;
    cout << "This is the second Constructor of the Picture \n";
}

void Picture::setRect(int rNum, Rectangle *rect){
    this->rNum = rNum;
    this->rect = rect;
}

void Picture::setCirc(int cNum, Circle *crcl){
    this->cNum = cNum;
    this->crcl = crcl;
}

void Picture::setLin(int lNum, Line *lin){
    this->lNum = lNum;
    this->lin = lin;
}

void Picture::paint(){
    cout << "\n===========================  The Circle  ==================================\n";
    for(int i = 0; i < this->cNum; i++)
        this->crcl[i].draw();

    cout << "\n===========================  The Rectangle  ==================================\n";

    for(int i = 0; i < this->rNum; i++)
        this->rect[i].draw();

    cout << "\n===========================  The Line  ==================================\n";

    for(int i = 0; i < this->lNum; i++)
        this->lin[i].draw();

    cout << "\n=======================================================================\n";
}

Picture::~Picture(){
    cout << "This is the default Destructor of the Picture \n";
}
