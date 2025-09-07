#include <iostream>
#include <string>
using namespace std;
char* p1="s";const char *p2="string";
void p(const char* p)
{
    cout<<p<<endl;
    
    cout<<p1;
}

int main()
{
    p(p2);
}

