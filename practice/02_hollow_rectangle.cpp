// Input:
// 4 6
// Output:
// ******
// *    *
// *    *
// ******
#include<iostream>

using namespace std;
int main()
{
    int m,n,i,j,k;
    cin>>m>>n;

    for(i=0;i<m;i++)
    {
        if(i==0 || i==m-1)
        {
            for(j=0;j<n;j++)
            cout<<"*";
        }
        else
        {
          cout<<"*";
          for(j=0;j<n-2;j++)
          cout<<" ";
          cout<<"*";  
        }
        cout<<endl;
    }
    return 0;
}