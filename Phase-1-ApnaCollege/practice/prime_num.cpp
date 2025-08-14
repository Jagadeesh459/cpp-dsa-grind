#include<iostream>

using namespace std;
void prime(int n)
{
    int count;
    for(int i=2;i<=n;i++)
    {
        count=0;
        for(int j=2;j<i;j++)
        {
            if(i%j==0)
            count++;
        }
        if(count==0)
        cout<<i<<endl;
    }
}
int main()
{
    int n;
    cout<<"enter the value of n";
    cin>>n;
    prime(n);
    return 0;
}