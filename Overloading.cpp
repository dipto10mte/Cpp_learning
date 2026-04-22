#include<iostream>
using namespace std;

// overload myAbs() three ways
int myAbs(int n);
long myAbs(long n);
double myAbs(double n);

int main()
{
    cout << "myAbsolute value of -10: " << myAbs(-10) << "\n\n";
    cout << "myAbsolute value of -10L: " << myAbs(-10L) << "\n\n";
    cout << "myAbsolute value of -10.01: " << myAbs(-10.01) << "\n\n";

    return 0;
}

// myAbs() for ints

