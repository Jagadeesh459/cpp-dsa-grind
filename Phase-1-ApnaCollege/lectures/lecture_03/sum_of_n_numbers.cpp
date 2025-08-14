#include<iostream>

using namespace std;
int main()
{
    int i, n, sum = 0;
    cout<<"enter the vsalue of n: ";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        sum += i;
    }
    cout<<"the sum of "<<n<<" natural numbers is "<<sum;
    return 0;
}