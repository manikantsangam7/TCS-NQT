#include<bits/stdc++.h>
using namespace std;
int factorial(int m)
{
    if(m==0)
    return 1;
    else
    return m*factorial(m-1);
}
int main()
{
    int n;
    cin>>n;
    int temp,check=n,sum=0;
    while(check>0)
    {
        temp=check%10;
        sum+=factorial(temp);
        check/=10;
    }
    if(sum==n)
    cout<<"Strong no."<<endl;
    else
    cout<<"Not a strong no."<<endl;
    return 0;    
}