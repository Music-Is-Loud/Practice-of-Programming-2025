#include <iostream>
using namespace std;
class Complex
{
    public:
        double real,imag;
        Complex(int i)//类型转换函数
        {
        	  real=i;imag=0;
              cout<<1<<endl;
        }
        Complex(double r,double i)//构造函数
        {
        	real=r;imag=i;
            cout<<2<<endl;
		}
        Complex(double n)
        {
            real=n;imag=n;
        }
        Complex(const Complex& c)
        {
            cout<<3<<endl;
        }
        
};
Complex c1(12);

int main()
{
    //cout<<c1.real;
    Complex c2(7);
    c1=9;
    c1=c2;
    cout<<c1.imag<<c1.real<<endl;
    cout<<c2.imag<<c2.real<<endl;
}