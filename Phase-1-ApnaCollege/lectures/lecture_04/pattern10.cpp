//for n=5
// AAAAA
//  BBBB
//   CCC
//    DD
//     E
#include<iostream>
using namespace std;
int main()
{
    int i,j,n,k;
    char ch='A';
    cout<<"enter the value of n\n";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<i;j++)
        {
            cout<<" ";
        }
        for(k=1;k<=n-i+1;k++)
        {
            cout<<ch;
        }
        cout<<endl;
        ch++;
    }
    return 0;
}
