#include <iostream>
#include "Derived.h"

Derived::Derived() : Base (){
    this->c = 0;
    std::cout << "This is the Default Child Constructor\n";
}

Derived::Derived(int c) : Base (c){
    this->c = c;
    std::cout << "This is the Second Child Constructor\n";
}

Derived::Derived(int a, int b, int c) : Base (a, b){
    this->c = c;
    std::cout << "This is the Third Child Constructor\n";
}

void Derived::setC(int c){
    this->c = c;
}

int Derived::getC(){
    return this->c;
}

int Derived::productABC(){
    //return Base::productAB * this->c;
    return this->Base::getA() * this->Base::getB() * this->c;
}

Derived::~Derived(){
    std::cout << "This is the Default Child Destructor\n";
}
