// Input:

// 5
// Output:

//     *****
//    *   *
//   *   *
//  *   *
// *****
#include<iostream>

using namespace std;
int main()
{
    int n,i,j,k;
    cin>>n;
    for(i=0;i<n;i++)
    {
        for(k=0;k<n-i-1;k++)
        cout<<" ";
        if(i==0 || i==n-1)
        {
            for(j=0;j<n-1;j++)
            cout<<"*";
        }
        else
        {
            cout<<"*";
            for(j=0;j<n-2;j++)
            cout<<" ";
        }
        cout<<"*"<<endl;
    }
    return 0;
}