//for n=5
// 1
// 21
// 321
// 4321
// 54321
#include<iostream>
using namespace std;
int main()
{
    int i,j,n;
    cout<<"enter the value of n \n";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=i;j>0;j--)
        {
            cout<<j;
        }
        cout<<endl;
    }
    return 0;
}