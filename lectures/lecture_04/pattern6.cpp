//for n=5
// A
// BB
// CCC
// DDDD
// EEEEE
#include<iostream>
using namespace std;
int main()
{
    int i,j,n;
    char ch='A';
    cout<<"ebnter the value of n\n";
    cin>>n;
    for(i=0;i<n;i++)
    {
        for(j=0;j<=i;j++)
        {
            cout<<ch;
        }
        cout<<endl;
        ch++;
    }
    return 0;
}