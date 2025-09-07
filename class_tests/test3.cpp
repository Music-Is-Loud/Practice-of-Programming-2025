#include <iostream>
using namespace std;
class A
{
    public:
        A()
        {

        }
        A(A& a)
        {
        }
        ~A ()
        {
            cout<<"Destructed."<<endl;
        }
};
int main()
{
    A* p=new A[2];
    A* p2=new A;
    //A a;
    delete p2;
    //delete []p;
    
}