#include<iostream>
using namespace std;

#define size 10

// Declare a stack class for characters
class stack{
    char stck[size]; //Holds the stack
    int tos; // index of top of stack

public:
    void init(); // initialize stack
    void push(char ch); // push character on stack
    char pop(); // pop cahracter from stack
};

// initialize the stack
void stack::init()
{
    tos=0;
}

// push a character
void stack::push(char ch)
{
    if(tos==size){
        cout << "Stack is full";
        return;
    }
    stck[tos]=ch;
    tos++;
}

// Pop a character
char stack::pop()
{
    if(tos==0){
        cout << "stack is empty";
        return 0; // return null on empty stack
    }
    tos--;
    return stck[tos];
}


