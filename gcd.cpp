#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n1,n2;
    cin>>n1>>n2;
    cout<<__gcd(n1,n2);
}
/* OTHER WAY
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,gcd;
    cin>>n>>m;
    for(int i=1;i<=n && i<=m ; i++)
    {
        if(n%i==0 && m%i==0)
        gcd=i;
    }
    cout<<gcd;
}
*/

/*
#include <iostream>
using namespace std;

int gcd(int a, int b)
{
if (b != 0)
return gcd(b, a % b);
else
return a;
}

int main()
{
int a, b;
cout << “Enter two numbers: “;
cin >> a >> b;
cout << “\nGCD of ” << a << ” and ” << b << ” is ” << gcd(a,b);
cout << endl;
return 0;
}
*/