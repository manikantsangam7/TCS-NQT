#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str,first="",second="",third="",sub="";
    int count=0;
    getline(cin,str);
    int len=str.length();
    for(int i=0;i<len;i++)
    {
        if(str[i]!=' ')
        {
            sub+=str[i];
        }
        else
        {
            count++;
            switch(count)
            {
                case 1: for(int j=0;j<sub.length();j++)
                {
                    if(sub[j]=='a' || sub[j]=='e' || sub[j]=='i' || sub[j]=='o' || sub[j]=='u')
                    {
                        sub[j]='*';
                    }
                }
                first=sub;
                sub="";
                break;
                case 2: for (int j=0;j<sub.length();j++)
                {
                    if(!(sub[j]=='a' || sub[j]=='e' || sub[j]=='i' || sub[j]=='o' || sub[j]=='u'))
                    sub[j]='@';
                }
                second=sub;
                sub="";
                break;
                case 3: for(int j=0;j<sub.length();j++)
                {
                    if(sub[j]>=97 && sub[j]<=122)
                        sub[j]=sub[j]-32;
                }
                third=sub;
                sub="";
                break;
                default : break;
            }
        }
    }
    cout<<first<<second<<third;
    return 0;
}