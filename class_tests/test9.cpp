#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
    string s2("insert show");
    string s1("helloworld");
    s1.insert(2,s2,5,3);
    cout<<s1;
}




