#ifndef POINT_H_INCLUDED
#define POINT_H_INCLUDED

class Point{
    int x, y;

public:
    Point();
    Point(int, int);
    void setX(int);
    void setY(int);
    int getX();
    int getY();
    ~Point();
};

#endif // POINT_H_INCLUDED


