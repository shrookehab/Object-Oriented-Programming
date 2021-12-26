#include <iostream>
#include "Base.h"

Base::Base(){
    this->a = this->b = 0;
    std::cout << "This is the Default Parent Constructor\n";
}

Base::Base(int a){
    this->a = this->b = a;
    std::cout << "This is the Second Parent Constructor\n";
}

Base::Base(int a, int b){
    this->a = a;
    this->b = b;
    std::cout << "This is the Third Parent Constructor\n";
}

void Base::setA(int a){
    this->a = a;
}

void Base::setB(int b){
    this->b = b;
}

int Base::getA(){
    return this->a;
}

int Base::getB(){
    return this->b;
}

int Base::productAB(){
    return this->a * this->b;
}

Base::~Base(){
    std::cout << "This is the Default Parent Destructor\n";
}
