//for n=4
//    *
//   * *
//  *   *
// *     *
//  *   *
//   * *
//    *
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int n,i,j,k,l;
    // char ch = 'A';
    cout<<"enter the value of n: ";
    cin>>n;

    for(i=0;i<n;i++)
    {
        for(k=n-1;k>i;k--)
        cout<<" ";
        cout<<"*";
        for(j=1;j<2*i;j++)
        cout<<" ";
        if(i!=0)
        cout<<"*";
        cout<<endl;
    }
    for(i=0;i<n-1;i++)
    {
        for(k=0;k<=i;k++)
        cout<<" ";
        cout<<"*";
        for(j=0;j<2*(n-2-i)-1;j++)
        cout<<" ";
        if(i!=n-2)
        cout<<"*";
        cout<<endl;
    }
    return 0;
}