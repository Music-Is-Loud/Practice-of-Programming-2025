#include <iostream>
#include <set>
#include <algorithm>
#include <string>
#include <limits>
using namespace std;
struct cmp
{
    bool operator() (const pair<int,int>&p1,const pair<int,int>&p2)const
    {
        if(p1.second>p2.second) return true;
        else if (p2.second>p1.second) return false;
        else if (p1.first<p2.first) return true;
        else return false;  
    }
};
int main()
{
    multiset< pair<int,int> ,cmp> member;
    member.insert(make_pair(1,1000000000));
    int n;
    int id,strength;
    cin>>n;
    while(n--)
    {
        cin>>id>>strength;
        cout<<id<<" ";
        auto it = member.lower_bound(make_pair(id,strength));
        //降序排序，返回第一个实力值比他小的
        //if(it!=member.end())
            //cout<<"***"<<it->first<<it->second<<endl;
        //else cout<<"end"<<endl;
        if(it==member.end())
        {
            //cout<<"**"<<member.rbegin()->first<<member.rbegin()->second<<"**"<<endl;
            cout<<member.lower_bound(make_pair(0,member.rbegin()->second))->first<<endl;
        }

        else if (it==member.begin())
            cout<<it->first<<endl;


        else if (strength- it->second < prev(it)->second - strength)
            cout<< it->first <<endl;

        else if (strength- it->second > prev(it)->second - strength)
            cout<< member.lower_bound(make_pair(0,prev(it)->second))->first <<endl;

        else if (strength==it->second)
            cout<< member.lower_bound(make_pair(0,strength))->first<<endl;
        
        else
        {
            cout<< min(it->first,member.lower_bound(make_pair(0,prev(it)->second))->first)<<endl;
        }
        member.insert(make_pair(id,strength));
        
    }
}