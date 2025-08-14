// Input:
// 5
// Output:
// 1
// 0 1
// 1 0 1
// 0 1 0 1
// 1 0 1 0 1
#include<iostream>

using namespace std;
int main()
{
    int n,i,j;
    cin>>n;
    for(i=0;i<n;i++)
    {
        for(j=0;j<i+1;j++)
        {
            if(j%2==0)
            cout<<"1";
            else
            cout<<"0";
        }
        cout<<endl;
    }
    return 0;
}