// this code calculates  an employee's gross pay from work hours and the employee's wage
#include <iostream>
using namespace std;

int main()
{
    int h,w;

    //Work hour input
    cout << "Enter the working hours: ";
    cin >> h;
    //Wage input
    cout << "Enter the wage: ";
    cin >> w;
    //Gross pay output
    cout << "The employees gross pay is: " << h*w;

    return 0;
}
