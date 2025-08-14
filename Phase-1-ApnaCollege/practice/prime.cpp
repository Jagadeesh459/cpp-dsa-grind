#include<iostream>

using namespace std;
int prime(int n)
{
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        return 1;
    }
    return 0;
}
int main()
{
    int n,res;
    cout<<"enter the value of n: ";
    cin>>n;
    res = prime(n);
    if(res==0)
    cout<<"n is aprime number";
    else
    cout<<"n is not a prime number";
    return 0;
}