#include<bits/stdc++.h>
#include <iterator>
using namespace std;
int main()
{
    map<char,int> mp;
    string str;
    cin>>str;
    for(int i=0;i<str.length();i++)
    {
        mp[str[i]]++;
    }
   map<char,int>::iterator it;
   for(it=mp.begin();it!=mp.end();it++)
   {
       cout<<it->first<<it->second;
   }
   return 0;
}