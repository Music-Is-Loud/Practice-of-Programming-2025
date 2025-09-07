#include <cstdlib>
#include <iostream>
using namespace std;
int mystrlen(const char * s) 
{	int i = 0;
	for(; s[i]; ++i);
	return i;
}
void mystrcpy(char * d,const char * s)
{
	int i = 0;
	for( i = 0; s[i]; ++i)
		d[i] = s[i];
	d[i] = 0;
		
}
int strcmp(const char * s1,const char * s2)
{
	for(int i = 0; s1[i] && s2[i] ; ++i) {
		if( s1[i] < s2[i] )
			return -1;
		else if( s1[i] > s2[i])
			return 1;
	}
	return 0;
}
void mystrcat(char * d,const char * s)
{
	int len = strlen(d);
	strcpy(d+len,s);
}
class MyString
{
// 在此处补充你的代码
    private:
        char* str;
		int lens;
    public:
        MyString()
        {
			lens=0;
			str=new char[1];
        }
		MyString(const char* s)
		{
			lens=strlen(s);
			str=new char[lens+1];
			strcpy(str,s);
		}
		MyString(const MyString& s)
		{
			lens=s.lens;
			str=new char[lens+1];
			strcpy(str,s.str);
		}
		~MyString ()
		{
			delete[] str;
		}
		friend ostream& operator <<(ostream &o,MyString s)
		{
			o<<s.str;
			return o;
		}
		MyString operator+(MyString s)
		{
			/*cout<<"**"<<str<<"**"<<s.str<<"**"<<endl;
			MyString res=MyString(strcat(str,s.str));
			cout<<"**"<<str<<"**"<<s.str<<"**"<<res.str<<endl;
			！！严重的bug，导致str被修改
			*/
			int resLens=lens+s.lens;
			char *resStr=new char[resLens+1];
			strcpy(resStr,str);
			strcat(resStr,s.str);
			return MyString(resStr);
		}
		MyString& operator+=(char* s)
		{
			lens=lens+strlen(s);
			char* newStr=new char[lens+1];
			strcpy(newStr,str);
			strcat(newStr,s);
			delete[] str;
			str=newStr;
			return *this;
		}
		MyString& operator=(const MyString& s)
		{
			if(this==&s) return *this;
			delete[] str;
			lens=s.lens;
			str=new char[s.lens+1];
			strcpy(str,s.str);
			return *this;
		}
		char& operator[](int i)
		{
			return str[i];
		}
		MyString operator+(char* s)
		{
			int resLens=lens+strlen(s);
			char *resStr=new char[resLens+1];
			strcpy(resStr,str);
			strcat(resStr,s);
			return MyString(resStr);
		}
		friend MyString operator+(char* s,MyString mystring)
		{
			int resLens=mystring.lens+strlen(s);
			char *resStr=new char[resLens+1];
			strcpy(resStr,s);
			strcat(resStr,mystring.str);
			return MyString(resStr);
		}
		friend bool operator<(MyString s1,MyString s2)
		{
			if(strcmp(s1.str,s2.str)==-1) return true;
			else return false;
		}
		friend bool operator>(MyString s1,MyString s2)
		{
			if(strcmp(s1.str,s2.str)==1) return true;
			else return false;
		}
		friend bool operator==(MyString s1,MyString s2)
		{
			if(strcmp(s1.str,s2.str)==0) return true;
			else return false;
		}
		MyString operator()(int st,int length)
		{
			if(st>=lens) return MyString("");
			int resLens=length;
			char *resStr=new char[resLens+1];
			for(int i=st;i<st+length;i++)
			{
				resStr[i-st]=str[i];
			}
			return MyString(resStr);
		}

};


int CompareString( const void * e1, const void * e2)
{
	MyString * s1 = (MyString * ) e1;
	MyString * s2 = (MyString * ) e2;
	if( * s1 < *s2 )
	return -1;
	else if( *s1 == *s2)
	return 0;
	else if( *s1 > *s2 )
	return 1;
}
int main()
{
	MyString s1("abcd-"),s2,s3("efgh-"),s4(s1);
	MyString SArray[4] = {"big","me","about","take"};
	cout << "1. " << s1 << s2 << s3<< s4<< endl;
	s4 = s3;
	s3 = s1 + s3;
	cout << "2. " << s1 << endl;
	cout << "3. " << s2 << endl;
	cout << "4. " << s3 << endl;
	cout << "5. " << s4 << endl;
	cout << "6. " << s1[2] << endl;
	s2 = s1;
	s1 = "ijkl-";
	s1[2] = 'A' ;
	cout << "7. " << s2 << endl;
	cout << "8. " << s1 << endl;
	s1 += "mnop";
	cout << "9. " << s1 << endl;
	s4 = "qrst-" + s2;
	cout << "10. " << s4 << endl;
	s1 = s2 + s4 + " uvw " + "xyz";
	cout << "11. " << s1 << endl;
	qsort(SArray,4,sizeof(MyString),CompareString);
	for( int i = 0;i < 4;i ++ )
	cout << SArray[i] << endl;
	//s1的从下标0开始长度为4的子串
	cout << s1(0,4) << endl;
	//s1的从下标5开始长度为10的子串
	cout << s1(5,10) << endl;
	return 0;
}