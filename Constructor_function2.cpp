#include<iostream>
using namespace std;

#define size 10

// declare stack class for characters
class stack{
    char stck[size]; // holds the stack
    int tos; // index of top of stack
public:
    stack(); // constructor
    void push(char ch); // push char on stack
    char pop(); // pop character from stack
};

return 0;
}

// initialize the stack
stack::stack()
{
    cout << "Constructing a stack\n";
    tos = 0;
}

// push a character
void stack::push(char ch)
{
    if(tos==size){
        cout << "Stack is full\n";
        return;
    }
    stck[tos]=ch;
    tos++;
}


