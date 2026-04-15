//This program calculates lowest common dominator of two numbers
#include <iostream>
using namespace std;

 int main()
 {
    int a,b,d,m;

    //Input two numbers
    cout << "Enter two numbers: ";
    cin >> a >> b;

    //Calculate and output the dominator
    m=min(a,b);
    for(d=2;d<m;d++)if(((a%d)==0)&&((b%d)==0))break;
    if(d==m){ //In case if the found value is not dominator
        cout << "No common dominators";
        return 0;
    }
    cout << "The lowest common dominator is: " << d;
    return 0;
 }
