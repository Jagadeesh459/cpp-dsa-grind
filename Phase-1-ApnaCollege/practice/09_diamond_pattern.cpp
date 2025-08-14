// Input:
// 4
// Output:
//    *   
//   ***  
//  ***** 
// *******
//  ***** 
//   ***  
//    *  
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
        for(j=0;j<2*i +1;j++)
        cout<<"*";
        cout<<endl;
    }
    for(i=0;i<n-1;i++)
    {
        for(k=0;k<i+1;k++)
        cout<<" ";
        for(j=0;j<2*(n-1-i)-1;j++)
        cout<<"*";
        cout<<endl;
    }
    return 0;
}