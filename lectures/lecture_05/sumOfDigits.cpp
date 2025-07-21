#include<iostream>
int sum(int n)
{
    int d,sum=0;
    while(n>0)
    {
        d=n%10;
        sum+=d;
        n=n/10;
    }
    return sum;
}
using namespace std;
int main()
{
    int n;
    cout<<"enter the value of n\n";
    cin>>n;
    cout<<"the sum of the digits in the number n is "<<sum(n);
    return 0;
}