#include <iostream>
using namespace std;
class A
{
    public:
        virtual void Func()
        {
            cout<<"A"<<endl;
        }
};
class B:public A
{
    public:
        virtual void Func()
        {
            cout<<"B"<<endl;
        }
};
int main()
{
    A a;
    A* pa=new B();//有无括号都一样
    pa->Func();
    long* p1=(long*) &a;
    long* p2=(long*) pa;
    //p1指向的是A型变量a的地址，但是认为它指的是long型
    //p2和pa指向的是同一个地址，但是认为p2指向long型变量，pa指向A型变量
    *p2=*p1;
    //修改的是p2指向的对象，也就是pa指向的对象，变成了p1指向的对象，这里认为两边都是Long型
    pa->Func();
    //但实际上是完成了从B型变量指向A型变量
    return 0;
}