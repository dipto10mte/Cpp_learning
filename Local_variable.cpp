#include<iostream>
using namespace std;

int main()
{
    int i; // local variable declared at start of block

    cout << "Enter number: ";
    cin >> i;

    // compute factorial
    int j, fact=1; // variables are declared after action statements

    for(j=i;j>=1;j--) fact=fact*j;

    cout << "Factorial is: " << fact;
    return 0;
}
