// Input:

// 4
// Output:

// 1
// 2 3
// 4 5 6
// 7 8 9 10
#include<iostream>

using namespace std;
int main()
{
    int n,i,j,count=1;
    cin>>n;
    for(i=0;i<n;i++)
    {
        for(j=0;j<i+1;j++)
        {
            cout<<count;
            count++;
        }
        cout<<endl;
    }
    return 0;
}