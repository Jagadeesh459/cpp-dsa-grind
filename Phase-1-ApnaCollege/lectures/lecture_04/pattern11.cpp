//for n=4
//    1
//   121
//  12321
// 1234321
#include<iostream>
using namespace std;
int main()
{
    int i,j,k,l,n;
    cout<<"enter the value of n\n";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<n-i+1;j++)
        {
            cout<<" ";
        }
        for(k=1;k<=i;k++)
        {
            cout<<k;
        }
        for(l=i-1;l>0;l--)
        {
            cout<<l;
        }
        cout<<endl;
    }
    return 0;
}