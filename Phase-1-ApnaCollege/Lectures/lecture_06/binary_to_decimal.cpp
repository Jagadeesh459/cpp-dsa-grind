#include<iostream>

using namespace std;
int main()
{
    int n,rem,ans=0,pow=1;
    cout<<"enter the value of n: ";
    cin>>n;
    while(n>0)
    {
        rem = n%10;
        ans += rem*pow;
        n = n/10;
        pow = pow*2;
    }
    cout<<"the value of n in decimal form is "<<ans;
    return 0;
}