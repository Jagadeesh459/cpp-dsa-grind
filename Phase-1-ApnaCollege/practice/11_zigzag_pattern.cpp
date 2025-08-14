// Input:
// 9
// Output:
//    *   *   *
//  *   *   *   
// *   *   *  
#include<iostream>

using namespace std;
int main()
{
    int n,i,j,k;
    cin>>n;
    for(i=0;i<n;i++)
    {
        for(j=0;j<2*(n/2 -2-i)-1;j++)
        cout<<" ";
        cout<<"*";

    }
    return 0;
}