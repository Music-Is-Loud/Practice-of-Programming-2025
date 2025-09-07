#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;
class Complex {
private:
    double r,i;
public:
    void Print() 
    {
        cout << r << "+" << i << "i" << endl;
    }
    Complex& operator=(string input)
    {
        r=input[0]-'0';
        i=input[2]-'0';
        return *this;
    }
// 在此处补充你的代码
};
int main() {
    Complex a;
    a = "3+4i"; a.Print();
    a = "5+6i"; a.Print();
    return 0;
}