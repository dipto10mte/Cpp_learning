#include <iostream>
using namespace std;

int main()
{
    int i;

    cout << "Enter '0' to exit";
    do{
        cout << "\nEnter the feet value: ";
        cin >> i;
        cout << "The value in inch is: " << 12*i;
    }while(i!=0);

    return 0;
}
