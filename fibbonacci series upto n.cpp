#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a=0,b=1,sum=0;
    cin>>n;
    cout<<a<<" "<<b<<" ";
    sum=a+b;
    while(sum<n)
    {
        a = b;  // swap elements
        b = sum;
        sum = a + b;
        if(sum>n)
        break;
        cout<<sum<<" ";
    }
    return 0;
}