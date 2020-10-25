#include<bits/stdc++.h>
using namespace std;
int main()
{
    float f=41.925;
    int n;
    cin>>n;
    float a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    } 
    sort(a,a+n);
    float b[n];
    int count=0;
    for(int j=n-1;j>=0;j--)
    {
        if(a[j]<41.925)
        {
            b[count]=a[j];
            count++;
        }
    }
    if(count<2)
    cout<<"Not possible";
    else
    cout<<b[0]<<" "<<b[1]<<" "<<b[2];
    return 0;
}