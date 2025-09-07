#include<iostream>
class Test{
    public:
    Test (int n)
    {
        std::cout<<n<<"(1)"<<std::endl;
    }
    Test (int n,int m)
    {
        std::cout<<n<<m<<"(2)"<<std::endl;
    }
    Test()
    {
        std::cout<<"(3)"<<std::endl;
    }
};
int main()
{
    Test array1[3]={Test(1),Test(1,2)};
}