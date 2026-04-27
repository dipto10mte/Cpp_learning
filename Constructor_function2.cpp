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
