#ifndef DERIVED_H_INCLUDED
#define DERIVED_H_INCLUDED

#include "Base.h"

class Derived : public Base{
    int c;
public:
    Derived();
    Derived(int);
    Derived(int, int, int);
    void setC(int);
    int getC();
    int productABC();
    ~Derived();



};

#endif // DERIVED_H_INCLUDED
