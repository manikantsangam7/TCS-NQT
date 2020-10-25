#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if(n<4)
    cout<<"Invalid Input";
    else
    {
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        if(a[n-1]>0 && a[n-2]>0 && a[n-3]>0 && a[n-4]>0)
        cout<<a[n-1]*a[n-2]*a[n-3]*a[n-4];
        else
        cout<<"Invalid Input";
    }
    return 0;    
}