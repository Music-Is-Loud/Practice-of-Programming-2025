#include <iostream>
#include <set>
#include <string>
using namespace std;
int main()
{
    multiset<int> h;
    set<int> has;
    int n;string command;
    cin>>n;
    while(n--)
    {
        cin>>command;
        int x;
        if(command=="add")
        {
            cin>>x;
            h.insert(x);
            has.insert(x);
            cout<<h.count(x)<<endl;
        }
        if(command=="ask")
        {
            cin >> x;
            if(has.find(x)==has.end()) cout<<"0 0"<<endl;
            else cout<<"1 "<<h.count(x)<<endl;
        }
        if(command=="del")
        {
            cin>>x;
            cout<<h.count(x)<<endl;
            h.erase(x);
        }
    }
}