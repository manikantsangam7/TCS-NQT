#include<bits/stdc++.h>
using namespace std;
int func(int num)
{
    int sum=0;
    for(int i=1;i<=num/2;i++)
    {
        if(num%i==0)
        sum+=i;
    }
    return sum/num;
}
int main()
{
    int n,m;
    cin>>n>>m;
    if(func(n)==func(m))
    cout<<"Friendly pair"<<endl;
    else
    cout<<"Not friendly"<<endl;
    return 0;
}