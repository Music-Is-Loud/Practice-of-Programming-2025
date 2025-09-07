#include <iostream>
using namespace std;
class A
{
    public:
        int val;
        int vall;
        string s;
        A(int n=0)
        {
            val=n;
            vall=n;
            s="dd";
        }
        A& GetObj()
        {
            return *this;
        }
       /* operator int()
        {
            cout<<111<<endl;
            return val;
        }*/
};
A b;
int main()
{
    A a;
    a=5;
    cout<<a.val<<a.vall<<endl;
    cout<<a.s;
    return 0;
}