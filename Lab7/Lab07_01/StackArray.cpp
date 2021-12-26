#include <iostream>
#include "StackArray.h"
#include <assert.h>

using namespace std;

int StackArray::counter = 0;

StackArray::StackArray(){

    counter++;
    this->capacity = 5;
    this->elements = 0;
    this->arr = new int[this->capacity];
    cout << "This is the Constructor :) \n";
}

StackArray::StackArray(StackArray &s){

    counter++;
    this->capacity = s.capacity;
    this->elements = s.elements;
    this->arr = new int[this->capacity];
    for(int i = 0; i < this->capacity; i++)
        this->arr[i] = s.arr[i];
    cout << "This is the Copy Constructor :) \n";
}

StackArray::StackArray(int num){

    counter++;
    this->capacity = num;
    this->elements = 0;
    this->arr = new int[this->capacity];
    cout << "This is the Costructor :) \n";
}

int StackArray::lenght(){

    return this->elements;
}

void StackArray::push(int num){
    assert(!this->isFull());
    //if(this->isFull())
    //    this->expand();

    arr[this->elements] = num;
    this->elements++;
}

void StackArray::pop(){
    assert(!this->isEmpty());
    this->elements--;
}

int StackArray::top(){
    assert(!this->isEmpty());
    return (this->arr[this->elements - 1]);
}

bool StackArray::isEmpty(){

    return(this->elements == 0);
}

bool StackArray::isFull(){

    return(this->capacity == this->elements);
}

void StackArray::expand(){

    this->capacity *= 2;
    int *tmp = new int[this->capacity];

    for (int i = 0; i < this->capacity; i++)
        tmp[i] = arr[i];
    delete[] arr;
    arr = tmp;

}
int StackArray::getCounter(){

    return counter;
}

//StackArray& StackArray::operator = (const StackArray &s){
//
//    delete[] this->arr;
//    this->capacity = s.capacity;
//    this->elements = s.elements;
//    this->arr = new int[this->capacity];
//    for(int i = 0; i < this->capacity; i++)
//        this->arr[i] = s.arr[i];
//    return *this;
//}

void StackArray::operator = (StackArray s){

    delete[] this->arr;
    this->capacity = s.capacity;
    this->elements = s.elements;
    this->arr = new int[this->capacity];
    for(int i = 0; i < this->capacity; i++)
        this->arr[i] = s.arr[i];

}

StackArray::~StackArray(){
    counter--;
    delete[] arr;
    cout << "This is the Destructor :) \n";
}

void friendStack::printFriend(StackArray &s){

    cout << "Object number " << s.getCounter() << endl;
}
