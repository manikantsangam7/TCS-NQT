#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,sum=0,temp;
    cin>>n;
    int check=n;
    while(check!=0)
    {
        temp=check%10;
        sum+=temp;
        check/=10;
    }
    if(n%sum==0)
    cout<<"Harshad no."<<endl;
    else
    cout<<"Not a harshad no."<<endl;
    return 0;
}