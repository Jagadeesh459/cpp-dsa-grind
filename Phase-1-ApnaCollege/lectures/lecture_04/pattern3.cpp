// 123
// 456
// 789
#include<iostream>
using namespace std;
int main(){
    int i,j,n,k=1;
    n=3;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            cout<<k;
            k++;
        }
        cout<<"\n";
    }
    return 0;
}