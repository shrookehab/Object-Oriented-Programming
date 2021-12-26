#include <iostream>
#include <math.h>
#include "ComplexNumbers.h"

using namespace std;

void takeInput(float &, float &, float &, float &);
void printFromConstructors(ComplexNumbers, ComplexNumbers, ComplexNumbers);
void setComplexValues(float, float, ComplexNumbers &);
void printComplexValues(ComplexNumbers);
ComplexNumbers operator + (float, ComplexNumbers);
ComplexNumbers operator - (float, ComplexNumbers);

int main()
{
    float real, imagine, real1, imagine1;

    takeInput(real, real1, imagine, imagine1);

    ComplexNumbers comp;
    ComplexNumbers comp1;
    ComplexNumbers comp2;

    setComplexValues(real, imagine, comp);

    setComplexValues(real1, imagine1, comp1);


    cout << "\t\teq: c3 = c1 + c2\n";
    printComplexValues(comp2 = comp + comp1);

    cout << "\t\teq: c3 = c1 - c2\n";
    printComplexValues(comp2 = comp - comp1);

    cout << "\t\teq: c3 = c1 + 5\n";
    printComplexValues(comp2 = comp + 5);

    cout << "\t\teq: c3 = c1 - 5\n";
    printComplexValues(comp2 = comp - 5);

    cout << "\t\teq: c3 = 5 + c1\n";
    printComplexValues(comp2 = 5 + comp);

    cout << "\t\teq: c3 = 5 - c1\n";
    printComplexValues(comp2 = 5 - comp);

    cout << "\t\teq: c1 == c2\n";
    int isEqual = (comp == comp1);
    if(isEqual == 1)
        cout << "\n\t============================\n\t   The Result is : The 2 Complex numbers are equal to each other\n\t============================\n\n";
    else if(isEqual == 0)
        cout << "\n\t============================\n\t   The Result is : The 2 Complex numbers are not equal to each other\n\t============================\n\n";

    cout << "\t\teq: c1 += c2\n";
    printComplexValues(comp += comp1);

    cout << "\t\teq: c1 -= c2\n";
    printComplexValues(comp -= comp1);

    cout << "\t\teq: ++c1\n";
    printComplexValues(++comp);

    cout << "\t\teq: c1++\n";
    printComplexValues(comp++);

    cout << "\t\teq: --c1\n";
    printComplexValues(--comp);

    cout << "\t\teq: c1--\n";
    printComplexValues(comp--);

    cout << "\t\teq: (float) c1\n";
    cout << "\n\t============================\n\t   The Result is : " << (float) comp << "\n\t============================\n\n";

    cout << "\t\teq: c3 = c1 * c2\n";
    printComplexValues(comp2 = comp * comp1);

    cout << "\t\teq: c3 = c1 / c2\n";
    printComplexValues(comp2 = comp / comp1);

    cout << "\t\teq: c3 = c1 * 2\n";
    printComplexValues(comp2 = comp * 2);

    cout << "\t\teq: c3 = c1 / 2\n";
    printComplexValues(comp2 = comp / 2);

    cout << "------------------------------------------\n";


    return 0;
}

ComplexNumbers operator + (float num, ComplexNumbers comp){

    ComplexNumbers tmp;
    tmp.real = comp.real + num;
    tmp.imagine = comp.imagine ;

    return tmp;
}

ComplexNumbers operator - (float num, ComplexNumbers comp){

    ComplexNumbers tmp;
    tmp.real = comp.real - num;
    tmp.imagine = comp.imagine ;

    return tmp;
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
