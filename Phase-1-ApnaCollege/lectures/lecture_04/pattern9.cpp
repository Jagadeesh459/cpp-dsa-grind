//for n=5
// 11111
//  2222
//   333
//    44
//     5
#include<iostream>
using namespace std;
int main()
{
    int i,j,n,k;
    cout<<"enter the value of n\n";
    cin>>n;
    for(i=0;i<n;i++)
    {
        for(j=1;j<=i;j++)
        {
            cout<<" ";
        }
        for(k=0;k<n-i;k++)
        {
            cout<<i+1;
        }
        cout<<endl;
    }
    return 0;
}