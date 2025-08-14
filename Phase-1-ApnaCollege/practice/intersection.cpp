#include<iostream>

using namespace std;
void intersect(int a[],int b[],int m,int n)
{
    cout<<"\nthe intersection of the arrays a and b is\n";
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(a[i]==b[j])
            cout<<a[i]<<endl;
        }
    }
}
int main()
{
    int a[18],b[18],m,n,i;
    cout<<"enter the size of array a : ";
    cin>>m;
    cout<<"enter the array values:\n";
    for(i=0;i<m;i++)
    cin>>a[i];
    cout<<"the array values are:\n";
    for(i=0;i<m;i++)
    cout<<a[i]<<" ";
    cout<<"\nenter the size of array b : ";
    cin>>n;
    cout<<"enter the array values:\n";
    for(i=0;i<n;i++)
    cin>>b[i];
    cout<<"the array values are:\n";
    for(i=0;i<n;i++)
    cout<<b[i]<<" ";
    intersect(a,b,m,n);
    return 0;
}