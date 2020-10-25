#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,power=0,sum=0,temp;
    cin>>n;
    int check=n;
    while(check>0)
    {
        check/=10;
        power++;
    }
    check=n;
    while(check!=0)
    {
        temp=check%10;
        sum+=pow(temp,power);
        check/=10;
    }
    if(sum==n)
    cout<<"armstrong no."<<endl;
    else
    cout<<"Not an armstrong no."<<endl;
    return 0;
}