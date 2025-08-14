#include<iostream>
int fact(int n)
{
    int i,fact=1;
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    return fact;
}
using namespace std;
int main()
{
    int n;
    cout<<"enter the value of n to find the factorial\n";
    cin>>n;
    cout<<"the factorial of n is "<<fact(n);
    return 0;
}