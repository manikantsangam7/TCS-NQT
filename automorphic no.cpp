#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,digit=0;
    cin>>n;
    int check=n;
    while(check!=0)
    {
        digit++;
        check/=10;
    }
    if((n*n)%pow(10,digit) ==n)
    cout<<"Automorphic no."<<endl;
    else
    cout<<"Not an automorphic no."<<endl;
    return 0;
}