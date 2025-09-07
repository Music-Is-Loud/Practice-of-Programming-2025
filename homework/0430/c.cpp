#include <iostream>
#include <cstring>
using namespace std;
template <int bitNum>
struct MyBitset 
{
	char a[bitNum/8+1];
	MyBitset() { memset(a,0,sizeof(a));};
	void Set(int i,int v) {
		char & c = a[i/8];//一个字符对应8位，先看i对应在第几个字符
		int bp = i % 8;//再看i在字符里具体的位数（低位计数）
		if( v ) 
			c |= (1 << bp);//1<<bp仅在bp位为1，00010000，按位或，即bp位置1
		else 
			c &= ~(1 << bp);//1<<bp仅在bp位为1，～取反，11101111，按位与，bp位置0
	}
// 在此处补充你的代码
    class bit
    {
        public:
        int pos;//在bitNum的位数
        char* c;
        bit(int p,char* cc)
        {
            pos=p;c=cc;
        }
        bit operator=(int v)
        {
            if( v ) 
			*c |= (1 << pos);//1<<bp仅在bp位为1，00010000，按位或，即bp位置1
		    else 
			*c &= ~(1 << pos);//1<<bp仅在bp位为1，～取反，11101111，按位与，bp位置0
            return *this;
        }
        bit& operator=(bit b)
        {
            int vv;//通过b 还原出v,如果b pos位是1，则v=1;否则为0
            vv = (*b.c & (1 << b.pos)) >> b.pos;
            if( vv ) 
			*c |= (1 << pos);//1<<bp仅在bp位为1，00010000，按位或，即bp位置1
		    else 
			*c &= ~(1 << pos);//1<<bp仅在bp位为1，～取反，11101111，按位与，bp位置0
            return *this;
        }
        friend ostream& operator<<(ostream& o,bit b)
        {
            
            int ans=((*b.c & (1 << b.pos)) >> b.pos);//只输出一位，看着一位是0or1
            o<<ans;
            return o;
        }

    };
    
    bit operator[](int p)
    {
        char& c=a[p/8];
        return bit(p%8,&c);
    }
    void Print() {
		for(int i = 0;i < bitNum; ++i) 
			cout << (*this) [i];
		cout << endl;
	}

};

int main()
{
	int n;
	int i,j,k,v;
	while( cin >>  n) {
		MyBitset<20> bs;
		for(int i = 0;i < n; ++i) {
			int t;
			cin >> t;
			bs.Set(t,1);
		}
		bs.Print();
		cin >> i >> j >> k >> v;
		bs[k] = v;
		bs[i] = bs[j] = bs[k];
		bs.Print();
		cin >> i >> j >> k >> v;
		bs[k] = v;
		(bs[i] = bs[j]) = bs[k];
		bs.Print();
	}
	return 0;
}