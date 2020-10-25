#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,rev=0,num;
    cin>>n;
    int check=n;
    while(check>0)
    {
        num=check%10;
        rev=rev*10+num;
        check/=10;
    }
    if(rev==n)
    cout<<"pallindrome no.";
    else
    cout<<"not a pallindrome no.";
    return 0;
}