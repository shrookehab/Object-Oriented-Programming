#include <iostream>
#include "StackArray.h"

void viewContent(StackArray &);
void printStackValues(StackArray &);
void readStackValues(StackArray &, int);

using namespace std;

int main()
{
    StackArray s;
    cout << "This is the object number (" << s.getCounter() << ") \n";

//    friendStack f;
//    f.printFriend(s);

    //StackArray s1;
    //cout << "This is the object number (" << s1.getCounter() << ") \n";


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

    //printStackValues(s);
    //printStackValues(s);

    viewContent(s);
    return 0;
}

void readStackValues(StackArray &s, int i){
    int num;
    cout << "Please enter element number " << i + 1 << " in the stack : " ;
    cin >> num;
    s.push(num);
}

void viewContent(StackArray &s){

//    int top = s.elements;
//    while(top > 0){
//        top--;
//        printf("element : %d\n", s.arr[top]);
//
//    }
    cout << "\n--------------------------------------------\n\tThe Stack Values Are : \n--------------------------------------------\n";

    int topNum = s.elements;
    int i = 0;
    while (topNum != 0){
        cout << "The Element number " << i + 1 << " in the stack is : " << s.arr[--topNum] << "\n";
//        cout << "The Element number " << i + 1 << " in the stack is : " << s.top() << "\n";
//        s.pop();
//        topNum--;
        i++;
    }
    cout << "\n--------------------------------------------\n";
}

void printStackValues(StackArray &s){

    int i = 0;
    cout << "\n--------------------------------------------\n\tThe Stack Values Are : \n--------------------------------------------\n";
    while(!s.isEmpty()){
        cout << "The Element number " << i + 1 << " in the stack is : " << s.top() << "\n";
        s.pop();
        i++;
    }
    cout << "\n--------------------------------------------\n";
}
