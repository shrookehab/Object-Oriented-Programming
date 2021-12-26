#ifndef BASE_H_INCLUDED
#define BASE_H_INCLUDED

class Base{
    int a, b;
public:
    Base();
    Base(int);
    Base(int, int);
    void setA(int);
    void setB(int);
    int getA();
    int getB();
    int productAB();
    ~Base();

};

#endif // BASE_H_INCLUDED
