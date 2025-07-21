#include<iostream>
int sum(int n)
{
    int i,sum=0;
    for(i=1;i<=n;i++)
    {
        sum=sum+i;
    }
    return sum;
}
using namespace std;
int main()
{
    int n;
    cout<<"enter the value of n to find sum of n natural numbers\n";
    cin>>n;
    cout<<"The sum of n natual numbers is "<<sum(n);
    return 0;
}