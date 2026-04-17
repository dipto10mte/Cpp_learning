#include<iostream>
using namespace std;

#define size 10

// Declare a stack class for characters
class strack{
    char stck[size]; //Holds the stack
    int tos; // index of top of stack

public:
    void init(); // initialize stack
    void push(char ch); // push character on stack
    char pop(); // pop cahracter from stack
};

// initialize the stack
void strack::init()
{
    tos=0;
}

// push a character
void strack::push(char ch)
{
    if(tos==size){
        cout << "Stack is full";
        return;
    }
    stck[tos]=ch;
    tos++;
}


int main()
{
    strack s1,s2; // create two stacks
    int i;
    // initialize the stacks
    s1.init();
    s2.init();

    s1.push('a');
    s2.push('x');
    s1.push('b');
    s2.push('y');
    s1.push('c');
    s2.push('z');

    for(i=0;i<3;i++) cout << "Pop s1: " << s1.pop() << "\n";
    for(i=0;i<3;i++) cout << "Pop s2: " << s2.pop() << "\n";

    return 0;
}
