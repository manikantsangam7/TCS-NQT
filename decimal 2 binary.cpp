#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> vec;
    int n;
    cin>>n;
    int check=n,temp;
    while(check>0)
    {
        temp=check%2;
        auto it = vec.insert(vec.begin(), temp);
        check/=2;
    }
    for (auto it = vec.begin(); it != vec.end(); ++it) 
        cout << *it << " ";
}