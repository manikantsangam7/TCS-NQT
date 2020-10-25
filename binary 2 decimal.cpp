#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int n;
    cin>>n;
    long int sum=0,temp,check=n,i=0;
    while(check>0)
    {
        temp=check%10;
        sum+=temp*pow(2,i);
        i++;
        check/=10;
    }
    cout<<sum<<endl;
    return 0;
}