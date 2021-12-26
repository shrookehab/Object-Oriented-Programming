#include <iostream>
#include <math.h>
#include "ComplexNumbers.h"

using namespace std;

ComplexNumbers::ComplexNumbers(void){

    real = imagine = 0;
    //cout << "this is the default Constructor :)\n";
}

ComplexNumbers::ComplexNumbers(float real){

    this->real = this->imagine = real;
    //cout << "this is the second Constructor :)\n";
}

ComplexNumbers::ComplexNumbers(float real, float imagine){

    this->real = real;
    this->imagine = imagine;
    //cout << "this is the third Constructor :)\n";
}

void ComplexNumbers::setReal(float real){
    this->real = real;
}

void ComplexNumbers::setImagine(float imagine){
    this->imagine = imagine;
}

float ComplexNumbers::getReal(){
    return this->real;
}

float ComplexNumbers::getImagine(){
    return this->imagine;
}

ComplexNumbers ComplexNumbers::add(ComplexNumbers comp){

    ComplexNumbers tmp;
    tmp.real = this->real + comp.real;
    tmp.imagine = this->imagine + comp.imagine;

    return tmp;
}

ComplexNumbers ComplexNumbers::sub(ComplexNumbers comp){

    ComplexNumbers tmp;
    tmp.real = this->real - comp.real;
    tmp.imagine = this->imagine - comp.imagine;

    return tmp;
}

ComplexNumbers ComplexNumbers::mul(ComplexNumbers comp){

    ComplexNumbers tmp;
    tmp.real = (this->real * comp.real) - (this->imagine * comp.imagine);
    tmp.imagine = (this->imagine * comp.real) + (comp.imagine * this->real);

    return tmp;
}

ComplexNumbers ComplexNumbers::div(ComplexNumbers comp){

    ComplexNumbers tmp;
    tmp.real = ((this->real * comp.real) + (this->imagine * comp.imagine)) / (pow(comp.real, 2) + pow(comp.imagine, 2));
    tmp.imagine = ((this->imagine * comp.real) - (comp.imagine * this->real)) / (pow(comp.real, 2) + pow(comp.imagine, 2));

    return tmp;
}

void ComplexNumbers::printEquation(){

    if(this->imagine != 0){
        if(this->real != 0){
            if(this->imagine < 0){
                if (this->imagine == -1)
                    cout << this->real << " - " << "i" << endl;
                else
                    cout << this->real << " - " << abs(this->imagine) << "i" << endl;
            }
            else if(this->imagine > 0 && this->real != 0){
                if (this->imagine == 1)
                    cout << this->real << " + " << "i" << endl;
                else
                    cout << this->real << " + " << this->imagine << "i" << endl;
            }
        }
        if(this->real == 0){
            if(this->imagine < 0){
                if (this->imagine == -1)
                    cout << " - " << "i" << endl;
                else
                    cout << " - " << abs(this->imagine) << "i" << endl;
            }
            else if(this->imagine > 0){
                if (this->imagine == 1)
                    cout << "i" << endl;
                else
                    cout << this->imagine << "i" << endl;
            }
        }
    }
    else{
        if(this->real != 0)
        cout << this->real << endl;

        else if(this->real == 0)
        cout << this->imagine << endl;
    }


//    (this->imagine < 0)?
//        (this->real == 0)?
//            cout << " - " << abs(this->imagine) << "i" << endl
//            : cout << this->real << " - " << abs(this->imagine) << "i" << endl;
//        : cout << this->real << " - " << abs(this->imagine) << "i" << endl;
//
//    (this->imagine >= 0)?
//        (this->imagine == 0)?
//            cout << this->real << endl
//            : cout << this->real << " + " << this->imagine << "i" << endl;
//        : cout << this->real << " + " << this->imagine << "i" << endl;
}

ComplexNumbers::~ComplexNumbers(void){
    //cout << "After the Object has been Destroyed this is the Destructor :)\n";
}
