#ifndef STACKARRAY_H_INCLUDED
#define STACKARRAY_H_INCLUDED




template <class T>
class StackArray{

    static int counter;
    int capacity;
    int elements;
    T *arr;


public:
    template <class T1>
    friend void viewContent(StackArray<T1> );
    StackArray();
    StackArray(int);
    StackArray(StackArray &);
    int lenght();
    void push(T);
    void pop();
    T top();
    bool isEmpty();
    bool isFull();
    void expand();
    static int getCounter();
    void operator = (StackArray);
    //StackArray& operator = (const StackArray &);
    ~StackArray();

};


#endif // STACKARRAY_H_INCLUDED

