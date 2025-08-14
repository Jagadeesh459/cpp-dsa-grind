// Input:
// 3 5
// Output:
// *****
// *****
// *****
#include<iostream>
using namespace std;
int main()
{
    int n,m,i,j;
    cout<<"enter the value of m and n \n";
    cin>>m>>n;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}