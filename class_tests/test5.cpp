#include <iostream>
using namespace std;
class Ctyre
{
    int radius;int width;
    public:
        Ctyre(int r,int w):radius(r),width(w){};
        ~Ctyre(){};
};
class CEngine
{
    int engNum;
    public:
        CEngine(int n){};
        ~CEngine(){};
};
class CCar
{
	int price;CEngine engine;Ctyre tyre;
	public:
        const int carr;
		CCar(int p,int tw,int tr,int eNum,const int c);//构造
		~CCar(){};//析构
};
CCar::CCar(int p,int tw,int tr,int eNum,const int c):carr(c),price(p),tyre(tr,tw),engine(eNum)
{
};//构造函数，p属于price,tr和tw属于tyre，eNum属于engine
int main()
{
    cout<<1;
}