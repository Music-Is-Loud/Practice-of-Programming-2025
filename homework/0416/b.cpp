#include <iostream>
#include <string>
using namespace std;
// 在此处补充你的代码
template <class T1,class T2>
void MyForeach(T1* st,T1* ed,T2 f)
{
    T1* cur=st;
    while(cur<ed)
    {
        f(*cur);
        cur++;
    }
}
void Print(string s)
{
	cout << s;
}
void Inc(int & n)
{
	++ n;
}
string Array[100];
int a[100];
int main() {
	int m,n;
	while(cin >> m >> n) {
		for(int i = 0;i < m; ++i)
			cin >> Array[i];
		for(int j = 0; j < n; ++j)
			cin >> a[j];
		MyForeach(Array,Array+m,Print);		 
		cout << endl;
		MyForeach(a,a+n,Inc);		 
		for(int i = 0;i < n; ++i)
			cout << a[i] << ",";
		cout << endl;
	}
	return 0;
}