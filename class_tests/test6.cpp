#include <iostream>
class Complex
{
		public:
			double real,imag;
			Complex(double r=0.0,double i=0.0):real(r),imag(i)
			{}
			Complex operator-(const Complex &c);
			//类内定义，重载为成员函数
};
Complex operator+(const Complex &a,const Complex &b)
{
	 return Complex(a.real+b.real,a.imag+b.imag);
}//类外定义，重载为普通函数
Complex Complex::operator-(const Complex &c)
{
		return Complex(real-c.real,imag-c.imag);
}//类内定义，成员函数包含this指针，调用对象
int main()
{
    Complex c1(2,3);
    Complex c2(4,5);
    std::cout<<(c1+c2).real<<(c1+c2).imag;
    std::cout<<(c1-c2).real<<(c1-c2).imag;
}