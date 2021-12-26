#include <iostream>
#include "GeoShape.h"
#include "Triangle.h"
#include "Rectangle.h"
#include "Square.h"
#include "Circle.h"

using namespace std;

void triangleInfo(Triangle &);
void rectangleInfo(Rectangle &);
void squareInfo(Square &);
void circleInfo(Circle &);

float calculateSum(Triangle, Rectangle, Square, Circle);
float calculateSum2(GeoShape *, GeoShape *, GeoShape *, GeoShape *);
float calculateSum3(GeoShape **, int);


int main()
{
    Triangle tr;
    Rectangle rec;
    Square sq;
    Circle cr;

    GeoShape *ptr, *ptr1, *ptr2, *ptr3;

    GeoShape *ptr4[4];


    cout << "------------------Triangle-----------------\n";
    triangleInfo(tr);
    cout << "------------------Rectangle-----------------\n";
    rectangleInfo(rec);
    cout << "------------------Square-----------------\n";
    squareInfo(sq);
    cout << "------------------Circle-----------------\n";
    circleInfo(cr);

    ptr = &tr;
    ptr1 = &rec;
    ptr2 = &cr;
    ptr3 = &sq;

    ptr4[0] = &tr;
    ptr4[1] = &rec;
    ptr4[2] = &cr;
    ptr4[3] = &sq;

    cout << "\n\n------------------Sum Of the Area-----------------\n";
    cout << "The Sum Of Area = " << calculateSum(tr, rec, sq, cr) << "\n";

    cout << "\n\n\n------------------Sum Of the Area2-----------------\n";
    cout << "The Sum Of Area = " << calculateSum2(ptr, ptr1, ptr2, ptr3) << "\n";

    cout << "\n\n\n------------------Sum Of the Area3-----------------\n";
    cout << "The Sum Of Area = " << calculateSum3(ptr4, 4) << "\n";

    delete[] ptr;
    delete[] ptr1;
    delete[] ptr2;
    delete[] ptr3;
    delete[] ptr4;
    return 0;
}

void triangleInfo(Triangle &tr){
    int dim1, dim2;

    cout << "Please enter Triangle Dimension 1 : ";
    cin >> dim1;
    cout << "Please enter Triangle Dimension 2 : ";
    cin >> dim2;

    cout << "-----------------------------------\n";

    tr.setDim1(dim1);
    tr.setDim2(dim2);

    cout << "-----------------------------------\n";
    cout << "Triangle Dimension 1 = " << tr.getDim1() << "\n";
    cout << "Triangle Dimension 2 = " << tr.getDim2() << "\n";
    cout << "-----------------------------------\n";
    cout << "Triangle Area = " << tr.CalculateArea() << "\n";
    cout << "-----------------------------------\n";
}



void rectangleInfo(Rectangle &rec){
    int dim1, dim2;

    cout << "Please enter Rectangle Dimension 1 : ";
    cin >> dim1;
    cout << "Please enter Rectangle Dimension 2 : ";
    cin >> dim2;

    cout << "-----------------------------------\n";

    rec.setDim1(dim1);
    rec.setDim2(dim2);

    cout << "-----------------------------------\n";
    cout << "Rectangle Dimension 1 = " << rec.getDim1() << "\n";
    cout << "Rectangle Dimension 2 = " << rec.getDim2() << "\n";
    cout << "-----------------------------------\n";
    cout << "Rectangle Area = " << rec.CalculateArea() << "\n";
    cout << "-----------------------------------\n";

}

void squareInfo(Square &sq){
    int dim;

    cout << "Please enter Square Dimension : ";
    cin >> dim;
    cout << "-----------------------------------\n";

    sq.setSquareDim(dim);

    cout << "-----------------------------------\n";
    cout << "Square Dimension = " << sq.getSquareDim() << "\n";
    cout << "-----------------------------------\n";
    cout << "Square Area = " << sq.CalculateArea() << "\n";
    cout << "-----------------------------------\n";

}

void circleInfo(Circle &cr){
    int radius;

    cout << "Please enter Circle Radius : ";
    cin >> radius;
    cout << "-----------------------------------\n";

    cr.setRadius(radius);

    cout << "-----------------------------------\n";
    cout << "Circle Radius = " << cr.getRadius() << "\n";
    cout << "-----------------------------------\n";
    cout << "Circle Area = " << cr.CalculateArea() << "\n";
    cout << "-----------------------------------\n";

}

float calculateSum(Triangle tr, Rectangle rec, Square sq, Circle cr){

    float sum = tr.CalculateArea() + rec.CalculateArea() + sq.CalculateArea() + cr.CalculateArea();
    return sum;

}

float calculateSum2(GeoShape *ptr, GeoShape *ptr1, GeoShape *ptr2, GeoShape *ptr3){

    float sum = ptr->CalculateArea() + ptr1->CalculateArea() + ptr2->CalculateArea() + ptr3->CalculateArea();
    return sum;
}

float calculateSum3(GeoShape **ptr, int siz){

    float sum = 0;
    for (int i = 0; i < siz; i++)
        sum += ptr[i]->CalculateArea();
    return sum;
}

