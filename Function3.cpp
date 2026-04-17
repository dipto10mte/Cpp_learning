#include<iostream>
using namespace std;


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
