#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,sum=0;
    cin>>n;
    for(int i=1;i<=n/2;i++)
    {
        if(n%i==0)
        sum+=i;
    }
    if(sum==n)
    cout<<"perfect no."<<endl;
    else
    cout<<"Not a perfect no."<<endl;
    return 0;
}