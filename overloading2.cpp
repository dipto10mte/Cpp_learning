#include<iostream>
using namespace std;

void date(char *date); // date as a string
void date(int month, int day, int year); // date as a number

int main()
{
    date("8/23/99");
    date(8, 23, 99);

    return 0;
}

