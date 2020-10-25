#include<bits/stdc++.h>
using namespace std;
int prime(int n)
{
    int i, j, flag, count =0;
    //as prime numbers in given question start from 2
    for (i=2; i<=MAX; i++)
    {
        flag = 0;
        //to check if divisible apart from 1 & itself
        //loop starts from 2 to ignore divisibilty by 1 & ends before the number itself
        for (j=2; j<i; j++)
        {
            if(i%j == 0)
            {
                //number is not prime
                flag = 1;
                break;
            }
        }
        //is prime
        if (flag == 0){
            //if found the nth prime number
            if(++count == n)
            {
                cout<< i;
                break;
            }
        }
    }
}
int fib(int num)
{
    if(num==0 || num==1)
    return 1;
    else
    return fib(num-1)+fib(num-2);
}
int main()
{
    int n;
    cin>>n;
    if(n%2==0)
    prime(n/2);
    else
    fib(n/2 + 1);
    return 0;
}