#ifndef STACKARRAY_H_INCLUDED
#define STACKARRAY_H_INCLUDED



#endif // STACKARRAY_H_INCLUDED

class StackArray{

    static int counter;
    int capacity;
    int elements;
    int *arr;
    friend void viewContent(StackArray );
    friend class friendStack;

public:

    StackArray();
    StackArray(int);
    StackArray(StackArray &);
    int lenght();
    void push(int);
    void pop();
    int top();
    bool isEmpty();
    bool isFull();
    void expand();
    static int getCounter();
    void operator = (StackArray);
    //StackArray& operator = (const StackArray &);
    ~StackArray();

};

class friendStack{

public:
    void printFriend(StackArray &);

};

