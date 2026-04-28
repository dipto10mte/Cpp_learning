#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;

#define size 255

class strtype{
    char *p;
    int len;
public:
    strtype(); // constructor
    ~strtype(); // destructor
    void set(char *ptr);
    void show();
};

// Initialize a string object
strtype::strtype()
{
    p=(char*) malloc(size);
    if(!p){
        cout << "Allocation error\n";
        exit(1);
    }
    *p='\0';
    len=0;
}

// Free memory when destroying string object
strtype::~strtype()
{
    cout << "Freeing p\n";
    free(p);
}

void strtype::set(char *ptr)
{
    if(strlen(p)>>size){
        cout << "String too big";
        return;
    }
    strcpy(p,ptr);
    len=strlen(p);
}

void strtype::show()
{
    cout << p << " - length: " << len;
    cout << "\n";
}

