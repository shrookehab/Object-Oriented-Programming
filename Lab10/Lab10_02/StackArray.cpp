#include <iostream>
#include "StackArray.h"
#include <assert.h>

using namespace std;

template <class T>
int StackArray<T>::counter = 0;

template <class T>
StackArray<T>::StackArray(){

    counter++;
    this->capacity = 5;
    this->elements = 0;
    this->arr = new T[this->capacity];
    cout << "This is the Constructor :) \n";
}

template <class T>
StackArray<T>::StackArray(StackArray<T> &s){

    counter++;
    this->capacity = s.capacity;
    this->elements = s.elements;
    this->arr = new T[this->capacity];
    for(int i = 0; i < this->capacity; i++)
        this->arr[i] = s.arr[i];
    cout << "This is the Copy Constructor :) \n";
}

template <class T>
StackArray<T>::StackArray(int num){

    counter++;
    this->capacity = num;
    this->elements = 0;
    this->arr = new T[this->capacity];
    cout << "This is the Costructor :) \n";
}

template <class T>
int StackArray<T>::lenght(){

    return this->elements;
}

template <class T>
void StackArray<T>::push(T num){
    assert(!this->isFull());
    //if(this->isFull())
    //    this->expand();

    arr[this->elements] = num;
    this->elements++;
}

template <class T>
void StackArray<T>::pop(){
    assert(!this->isEmpty());
    this->elements--;
}

template <class T>
T StackArray<T>::top(){
    assert(!this->isEmpty());
    return (this->arr[this->elements - 1]);
}

template <class T>
bool StackArray<T>::isEmpty(){

    return(this->elements == 0);
}

template <class T>
bool StackArray<T>::isFull(){

    return(this->capacity == this->elements);
}

template <class T>
void StackArray<T>::expand(){

    this->capacity *= 2;
    T *tmp = new T[this->capacity];

    for (int i = 0; i < this->capacity; i++)
        tmp[i] = arr[i];
    delete[] arr;
    arr = tmp;

}

template <class T>
int StackArray<T>::getCounter(){

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

template <class T>
void StackArray<T>::operator = (StackArray<T> s){

    delete[] this->arr;
    this->capacity = s.capacity;
    this->elements = s.elements;
    this->arr = new T[this->capacity];
    for(int i = 0; i < this->capacity; i++)
        this->arr[i] = s.arr[i];

}

template <class T>
StackArray<T>::~StackArray(){
    counter--;
    delete[] arr;
    cout << "This is the Destructor :) \n";
}
