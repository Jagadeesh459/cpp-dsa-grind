#include<iostream>

using namespace std;
int main()
{
    int rem,n,ans=0,pow=1;
    cout<<"enter the value of n:";
    cin>>n;
    while(n>0)
    {
        rem = n%2;
        ans += rem*pow;
        n=n/2;
        pow = pow*10;
    }
    cout<<"the value of n in binary form is "<<ans;
    return 0;
}