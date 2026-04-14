#include <iostream>
using namespace std;
 int main()
 {
    int a,b,d,m;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    m=min(a,b);
    for(d=2;d<m;d++)if(((a%d)==0)&&((b%d)==0))break;
    if(d==m){
        cout << "No common dominators";
        return 0;
    }
    cout << "The lowest common dominator is: " << d;
    return 0;
 }
