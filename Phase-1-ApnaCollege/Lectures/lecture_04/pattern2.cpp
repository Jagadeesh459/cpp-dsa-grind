// ABCD
// ABCD
// ABCD
// ABCD
#include<iostream>
using namespace std;
int main()
{
    int i,n,j;
    char ch='A';
    n=4;
    for(i=1;i<=n;i++)
    {   ch='A';
        for(j=1;j<=n;j++)
        {
            cout<<ch;
            ch++;
        }
        cout<<endl;
    }
    return 0;
}