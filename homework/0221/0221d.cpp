#include <iostream>
using namespace std;
class Sample {
public:
	int v;
// 在此处补充你的代码
    Sample()
    {}
    Sample(int n)
    {
        v=n;
    }
    Sample(const Sample& a)
    {
        v=a.v+2;
    }
};
void PrintAndDouble(Sample o)
{
	cout << o.v;
	cout << endl;
}
int main()
{
	Sample a(5);//initialize 1
	Sample b = a;//copy1
	PrintAndDouble(b);//copy2 9
	Sample c = 20;//initialize 1
	PrintAndDouble(c);// copy 1:22
	Sample d;
	d = a;
	cout << d.v;//5
	return 0;
}