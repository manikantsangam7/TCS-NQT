#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,dec=0;
    cin>>n;
    int check=n,temp,power=0;
    while(check!=0)
    {
        temp=check%10;
        dec+=temp*pow(8,power);
        check/=10;
        power++;
    }  
    cout<<dec;  
}