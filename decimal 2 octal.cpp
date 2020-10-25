#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,temp;
    cin>>n;
    vector<int> vec;
    int check=n;
    while(check>0)
    {
        temp=check%8;
        vec.insert(vec.begin(),temp);
        check/=8;
    }
    for(int i=0;i<vec.size();i++)
    {
        cout<<vec[i];
    }
    return 0;
}