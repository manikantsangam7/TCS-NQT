#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,j,find,count=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cin>>find;
    for(j=n-1;j>=0;j--)
    {
        if(a[j]==find)
        count++;
        if(count==2)
        break;
    }
    cout<<" second last occurence of the no. is at "<<j+1<<" th position from starting";
    return 0;
}