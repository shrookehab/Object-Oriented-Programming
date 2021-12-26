#include <iostream>
#include "StackArray.h"
#include "StackArray.cpp"

template <class T1>
void viewContent(StackArray<T1> );
template <class T1>
void printStackValues(StackArray<T1> &);
template <class T1>
void readStackValues(StackArray<T1> &, int);

using namespace std;

int main()
{
    StackArray<float> s;
    cout << "This is the object number (" << s.getCounter() << ") \n";

    StackArray<float> s1;
    cout << "This is the object number (" << s.getCounter() << ") \n";

    int i = 0, size1 = 15;
    do{
        char ch;

        readStackValues(s, i);

        cout << "\nDo you want to add another element?? (y/n) : ";
        cin >> ch;
        cout << "\n";

        if (ch == 'n')
            break;
        i++;
    }while(i < size1);

    s1 = s;

    printStackValues(s1);
    printStackValues(s);
    //viewContent(s1);
    //viewContent(s);

//    StackArray<int> s;
//    StackArray<int> s1;
//
//    s.push(29);
//    s.push(10);
//
//    s1.push(55);
//
//    s1 = s;
//
//    viewContent(s1);
    return 0;
}

template <class T1>
void readStackValues(StackArray<T1> &s, int i){
    float num;
    cout << "Please enter element number " << i + 1 << " in the stack : " ;
    cin >> num;
    s.push(num);
}

template <class T1>
void viewContent(StackArray<T1> s){

    cout << "\n--------------------------------------------\n\tThe Stack Values Are : \n--------------------------------------------\n";

    int topNum = s.elements;
    int i = 0;
    while (topNum != 0){
        cout << "The Element number " << i + 1 << " in the stack is : " << s.arr[--topNum] << "\n";
//        cout << "The Element number " << i + 1 << " in the stack is : " << s.top() << "\n";
//        s.pop();
//        topNum--;
//        i++;
    }
    cout << "\n--------------------------------------------\n";
}

template <class T1>
void printStackValues(StackArray<T1> &s){

    int i = 0;
    cout << "\n--------------------------------------------\n\tThe Stack Values Are : \n--------------------------------------------\n";
    while(!s.isEmpty()){
        cout << "The Element number " << i + 1 << " in the stack is : " << s.top() << "\n";
        s.pop();
        i++;
    }
    cout << "\n--------------------------------------------\n";
}
