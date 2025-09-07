#include <iostream> 
#include <cstring> 
#include <cstdlib> 
#include <cstdio> 
using namespace std;
const int MAX = 110; 
class CHugeInt {
// 在此处补充你的代码
    int num[210];
    int bit;
    public:
        CHugeInt(int n)
        {
            memset(num,0,sizeof(num));
            bit=0;
            while(n!=0)
            {
                num[bit]=n%10;
                n=(n-n%10)/10;
                bit++;
            }
            for(int i=bit;i<210;i++)
            {
                num[i]=0;
            }
        }
        CHugeInt(char* str)
        {
            bit=strlen(str);
            for(int i=0;i<bit;i++)
            {
                num[i]=str[bit-i-1]-'0';
            }
            for(int i=bit;i<210;i++)
            {
                num[i]=0;
            }
        }
        CHugeInt operator+(const CHugeInt& a2)
        {
            CHugeInt res(0);
            
            int up=0;//进位
            int max_bit=max(bit,a2.bit);
            int min_bit=min(bit,a2.bit);
            for(int i=0;i<max_bit;i++)
            {
                if(num[i]+a2.num[i]+up>=10) 
                {
                    res.num[i]=(up+num[i]+a2.num[i])%10;
                    up=1;
                }
                else
                {
                    res.num[i]=up+num[i]+a2.num[i];
                    up=0;
                }
                //cout<<a2.num[i]<<"+"<<num[i]<<"="<<up<<" "<<res.num[i]<<endl;
            }
            if(up==1)  {res.num[max_bit]=1;max_bit++;}
            res.bit=max_bit;
            return res;
        } 
        CHugeInt operator+(int n)
        {
            return *this+CHugeInt(n);
        }
        friend CHugeInt operator+(int n,CHugeInt& a2)
        {
            return CHugeInt(n)+a2;
        }
        CHugeInt& operator+=(int n)
        {
            *this=*this+n;
            return *this;
        }
        CHugeInt& operator++()//前置加加,无参数
        {
            *this=*this+1;
            return *this;
        }
        CHugeInt operator++(int)//后置加加，有参数
        {
            CHugeInt res=*this;
            *this=*this+1;
            return res;
        }
        friend ostream& operator<<(ostream& o,const CHugeInt& out)
        {
            for(int i=out.bit-1;i>=0;i--)
            {
                o<<out.num[i];
            }
            return o;
        } 

};
int  main() 
{ 
	char s[210];
	int n;

	while (cin >> s >> n) {
		CHugeInt a(s);
		CHugeInt b(n);

		cout << a + b << endl;
		cout << n + a << endl;
		cout << a + n << endl;
		b += n;
		cout  << ++ b << endl;
		cout << b++ << endl;
		cout << b << endl;
	}
	return 0;
}