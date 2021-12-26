#include <iostream>
#include <math.h>
#include "ComplexNumbers.h"

using namespace std;

void takeInput(float &, float &, float &, float &);
void printFromConstructors(ComplexNumbers, ComplexNumbers, ComplexNumbers);
void setComplexValues(float, float, ComplexNumbers &);
void printComplexValues(ComplexNumbers);

int main()
{
    float real, imagine, real1, imagine1;

    takeInput(real, real1, imagine, imagine1);

    ComplexNumbers comp;
    ComplexNumbers comp1;
    //ComplexNumbers comp2(real);
    //ComplexNumbers comp3(real1, imagine1);

    //cout << "The Complex number from the default Constructor is :-> ";
    //printFromConstructors(comp1, comp2, comp3);
    setComplexValues(real, imagine, comp);

    setComplexValues(real1, imagine1, comp1);
    //printComplexValues(comp);

    cout << "\t\tAddition\n";
    printComplexValues(comp.add(comp1));

    cout << "\t\tsubtraction\n";
    printComplexValues(comp.sub(comp1));

    cout << "\t\tMultiplication\n";
    printComplexValues(comp.mul(comp1));

    cout << "\t\tDivision\n";
    printComplexValues(comp.div(comp1));

    cout << "------------------------------------------\n";


    return 0;
}
void takeInput(float &real, float &real1, float &imagine, float &imagine1){

    cout << "Please enter the first real number : ";
    cin >> real;
    cout << "\n";

    cout << "Please enter the first imagine number : ";
    cin >> imagine;
    cout << "\n";

    do{
        cout << "------------------------------------------\n";
        cout << "\nPlease enter the second real number : ";
        cin >> real1;
        cout << "\n";

        cout << "Please enter the second imagine number : ";
        cin >> imagine1;
        cout << endl;
        cout << "------------------------------------------\n";

        if(real1 == 0 && imagine1 == 0)
            cout << "Wrong INPUT!!, THE REAL AND IMAGINE NUMBERS CAN'T BE = 0 \nPLEASE RE-ENTER THEM AGAIN :)\n";

    }while(real1 == 0 && imagine1 == 0);
}

void printFromConstructors(ComplexNumbers comp, ComplexNumbers comp1, ComplexNumbers comp2){

    cout << "=============================\n";
    comp.printEquation();
    cout << "=============================\n";
    comp1.printEquation();
    cout << "=============================\n";
    comp2.printEquation();
    cout << "=============================\n";
}

void setComplexValues(float real, float imagine, ComplexNumbers &comp){

    comp.setReal(real);
    comp.setImagine(imagine);
}

void printComplexValues(ComplexNumbers comp){

    cout << "\n\t============================\n\t   The Result is : ";

    comp.printEquation();

    cout << "\t============================\n\n";
}
