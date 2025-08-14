#include<iostream>
int fact(int n)
{
    int i,fact=1;
    for(i=1;i<=n;i++)
    {
        fact*=i;
    }
    return fact;
}
using namespace std;
int main()
{
    int n,r;
    double res;
    cout<<"enter the values of n and r to find ncr binomial coefficient\n";
    cin>>n>>r;
    res = fact(n)/(fact(r) * fact(n-r));
    cout<<"the ncr value is "<<res;
    return 0;
}