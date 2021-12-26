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

ComplexNumbers ComplexNumbers::operator + (ComplexNumbers comp){

    ComplexNumbers tmp;
    tmp.real = this->real + comp.real;
    tmp.imagine = this->imagine + comp.imagine;

    return tmp;
}

ComplexNumbers ComplexNumbers::operator + (float num){

    ComplexNumbers tmp;
    tmp.real = this->real + num;
    tmp.imagine = this->imagine ;

    return tmp;
}

ComplexNumbers ComplexNumbers::operator - (ComplexNumbers comp){

    ComplexNumbers tmp;
    tmp.real = this->real - comp.real;
    tmp.imagine = this->imagine - comp.imagine;

    return tmp;
}

ComplexNumbers ComplexNumbers::operator - (float num){

    ComplexNumbers tmp;
    tmp.real = this->real - num;
    tmp.imagine = this->imagine ;

    return tmp;
}

ComplexNumbers ComplexNumbers::operator += (ComplexNumbers comp){

    this->real += comp.real;
    this->imagine += comp.imagine;
    return *this;
}

ComplexNumbers ComplexNumbers::operator -= (ComplexNumbers comp){

    this->real -= comp.real;
    this->imagine -= comp.imagine;
    return *this;
}

int ComplexNumbers::operator == (ComplexNumbers comp){

    if (this->real == comp.real && this->imagine == comp.imagine)
        return 1;
    else
        return 0;
    return -1;
}

ComplexNumbers ComplexNumbers::operator ++ (){
    this->real++;
    return *this;
}

ComplexNumbers ComplexNumbers::operator ++ (int){
    ComplexNumbers tmp = *this;
    this->real++;
    return tmp;
}

ComplexNumbers ComplexNumbers::operator -- (){
    this->real--;
    return *this;
}

ComplexNumbers ComplexNumbers::operator -- (int){
    ComplexNumbers tmp = *this;
    this->real--;
    return tmp;
}

ComplexNumbers::operator float(){

    return this->real;
}

ComplexNumbers ComplexNumbers::operator * (ComplexNumbers comp){

    ComplexNumbers tmp;
    tmp.real = (this->real * comp.real) - (this->imagine * comp.imagine);
    tmp.imagine = (this->imagine * comp.real) + (comp.imagine * this->real);

    return tmp;
}

ComplexNumbers ComplexNumbers::operator / (ComplexNumbers comp){

    ComplexNumbers tmp;
    tmp.real = ((this->real * comp.real) + (this->imagine * comp.imagine)) / (pow(comp.real, 2) + pow(comp.imagine, 2));
    tmp.imagine = ((this->imagine * comp.real) - (comp.imagine * this->real)) / (pow(comp.real, 2) + pow(comp.imagine, 2));

    return tmp;
}
ComplexNumbers ComplexNumbers::operator * (float num){

    ComplexNumbers tmp, comp;
    comp.real = num;
    comp.imagine = 0;
    tmp.real = (this->real * comp.real) - (this->imagine * comp.imagine);
    tmp.imagine = (this->imagine * comp.real) + (comp.imagine * this->real);

    return tmp;
}

ComplexNumbers ComplexNumbers::operator / (float num){

    ComplexNumbers tmp, comp;
    comp.real = num;
    comp.imagine = 0;
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

}

ComplexNumbers::~ComplexNumbers(void){
    //cout << "After the Object has been Destroyed this is the Destructor :)\n";
}
