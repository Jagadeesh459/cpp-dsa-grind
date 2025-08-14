//for n=5
// 1
// 22
// 333
// 4444
// 55555
#include<iostream>
using namespace std;
int main(){
    int i,j,n;
    cout<<"enter the value of n\n";
    cin>>n;
    for(i=0;i<n;i++)
    {
        for(j=0;j<=i;j++)
        {
            cout<<i+1;
        }
        cout<<endl;
    }
    return 0;
}