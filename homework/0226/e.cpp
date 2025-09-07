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
                num[i]=int(str[bit-i-1]);
            }
            for(int i=bit;i<210;i++)
            {
                num[i]=0;
            }
        }
        friend char* operator+(CHugeInt& a1,CHugeInt& a2)
        {
            char res[210];
            int up=0;//进位
            int max_bit=max(a1.bit,a2.bit);
            int min_bit=min(a1.bit,a2.bit);
            for(int i=0;i<max_bit;i++)
            {
                if(a1.num[i]+a2.num[i]+up>=10) 
                {
                    up=1;res[i]='0'+(up+a1.num[i]+a2.num[i])%10;
                }
                else
                {
                    up=0;res[i]='0'+up+a1.num[i]+a2.num[i];
                }
            }
            if(up==1)  res[max_bit+1]='1';
            return res;
        } 
         
        friend ostream& operator<<(ostream& o,CHugeInt& out)
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
		//cout << n + a << endl;
		//cout << a + n << endl;
		//b += n;
		//cout  << ++ b << endl;
		//cout << b++ << endl;
		cout << b << endl;
	}
	return 0;
}