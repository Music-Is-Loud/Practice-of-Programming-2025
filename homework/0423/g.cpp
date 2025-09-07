//#include<bits/stdc++.h>
#include <memory>
#include <iostream>
#include <set>
using namespace std;
int count(int n)
{
    if(n==1 or n==2 or n==3) return 0;
    int nown=n,nownum=0;
    //cout<<"**";
    if(nown%2==0) nownum++;
    while(nown%2==0)
    {
        nown=nown/2;
    }
    int i=3;
    while(i*i<=n)
    {
        if(nown%i==0) nownum++;
        while(nown%i==0)
        {
            //cout<<"1";
            //nownum++;
            nown=nown/i;
        }
        i+=2;
    }
    //cout<<"!!"<<endl;
    if(nown>1) nownum+=1;
    if(nownum==1 and nown>1) nownum=0;
    return nownum;
}
struct number
{
    int val;//数值
    int num;//质因数个数
};
struct cmp 
{
    bool operator()(const number& a,const number& b)const
    {
        if(a.num>b.num) return true;
        if(a.num<b.num) return false;
        else return a.val>b.val;
    }
};
int main()
{
    multiset<number,cmp> s;
    int a;number A;
    int N;cin>>N;
    while(N--)
    {
        for(int i=0;i<10;i++)
        {
            cin>>a;
            A.val=a;A.num=count(a);s.insert(A);
        }
        cout<<s.begin()->val<<" "<<s.rbegin()->val<<endl;
        s.erase(s.begin());
        s.erase(prev(s.end()));
    }
}
