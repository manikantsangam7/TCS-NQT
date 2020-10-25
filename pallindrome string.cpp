#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str,rev="";
    cin>>str;
    int len=str.length();
    for(int i=len-1;i>=0;i--)
    {
        rev+=str[i];
    }
    if(rev==str)
    cout<<"Pallindrome string"<<endl;
    else
    cout<<"Not a pallindrome string"<<endl;
    return 0;
}