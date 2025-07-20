// Input:

// 4
// Output:

// *      *
// **    **
// ***  ***
// ********
// ********
// ***  ***
// **    **
// *      *
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int n,i,j,k,l,m;
    // char ch = 'A';
    cin>>n;

    for(i=0;i<n;i++)
    {
        for(j=0;j<i+1;j++)
        cout<<"*";
        for(k=0;k<n-i-1;k++)
        cout<<" ";
        for(l=0;l<n-i-1;l++)
        cout<<" ";
        for(m=0;m<i+1;m++)
        cout<<"*";
        cout<<endl;
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i;j++)
        cout<<"*";
        for(k=0;k<i;k++)
        cout<<" ";
        for(l=0;l<i;l++)
        cout<<" ";
        for(m=0;m<n-i;m++)
        cout<<"*";
        cout<<endl;
    }
    return 0;
}