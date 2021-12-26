#ifndef LINE_H_INCLUDED
#define LINE_H_INCLUDED

#include "Point.h"

class Line{
    Point startP;
    Point endP;

public:
    Line();
    Line(int, int, int, int);
    void draw();
    ~Line();


};


#endif // LINE_H_INCLUDED
