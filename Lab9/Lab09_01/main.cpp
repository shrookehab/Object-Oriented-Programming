#include <iostream>
#include "Base.h"
#include "Derived.h"

using namespace std;

int main()
{
    Derived obj;
    int num;

    cout << "\n---------------------------------\n";

    cout << "Please enter the value of A : ";
    cin >> num;
    obj.setA(num);
    cout << "\n";

    cout << "Please enter the value of B : ";
    cin >> num;
    obj.setB(num);
    cout << "\n";

    cout << "Please enter the value of C : ";
    cin >> num;
    obj.setC(num);

    cout << "---------------The Results------------------\n";

    cout << "The Value of A = " << obj.getA() << "\n\n";
    cout << "The Value of B = " << obj.getB() << "\n\n";
    cout << "The Value of C = " << obj.getC() << "\n";

    cout << "---------------------------------\n";

    cout << "The Product of AB = " << obj.productAB() << "\n\n";
    cout << "The Product of ABC = " << obj.productABC() << "\n";

    cout << "---------------------------------\n";

    return 0;
}
