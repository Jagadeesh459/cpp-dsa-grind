#include<iostream>

using namespace std;
int main()
{
    int a[18],n,i,j,temp;
    cout<<"enter the value of n: ";
    cin>>n;
    cout<<"enter the array elements \n";
    for(i=0;i<n;i++)
    cin>>a[i];
    cout<<"the array values before reversing are\n";
    for(i=0;i<n;i++)
    cout<<a[i]<<endl;
    for(i=0,j=n-1;i<j;i++,j--)
    {
        temp = a[i];
        a[i]=a[j];
        a[j]=temp;
    }
    cout<<"the array values after reversing are\n";
    for(i=0;i<n;i++)
    cout<<a[i]<<endl;
    return 0;
}