#include <iostream>
#include <list>
#include <vector>
#include <map>
#include <string>
#include <algorithm>
#include <unordered_set>
using namespace std;
map <int, vector<int> > mp;
int main()
{
    int n;string command;
    
    cin>>n;
    int id;int id2;int value;
    for(int i=0;i<n;i++)
    {
        cin>>command;
        if(command == "new")
        {
            cin>>id;
            mp[id] = vector<int>();
        }
        if(command == "add")
        {
            cin>>id;
            cin>>value;
            mp[id].push_back(value);
        }
        if(command == "out")
        {
            cin>>id;
            vector<int>temp = mp[id];
            sort(temp.begin(),temp.end());
            for(int i=0;i<temp.size();i++)
            {
                cout<<temp[i]<<" ";
            }
            cout<<endl;
        }
        if(command == "merge")
        {
            cin>>id>>id2;
            if(id!=id2)
            {
                mp[id].insert(mp[id].end(),mp[id2].begin(),mp[id2].end());
                mp[id2].clear();
            }
        }
        if(command == "unique")
        {
            cin>>id;
            vector<int> new_vec;
            unordered_set<int> seen;
            for(int i=0;i<mp[id].size();i++)
            {
                if(!seen.count(mp[id][i]))
                {
                    new_vec.push_back(mp[id][i]);
                    seen.insert(mp[id][i]);
                }
            }
            mp[id]=new_vec;
        }
    }
}