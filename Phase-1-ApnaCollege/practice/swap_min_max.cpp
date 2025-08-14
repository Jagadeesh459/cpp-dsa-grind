#include<iostream>

using namespace std;
void swap(int a[],int n)
{
    int temp,x=0,y=0;
    int smallest =a[0];
    int largest = a[0];
    for(int i=0;i<n;i++)
    {
        if(a[i]>largest)
        {
            largest=a[i];
            y=i;
        }
        if(a[i]<smallest)
        {
            smallest=a[i];
            x=i;
        }

    }
    temp=a[x];
    a[x]=a[y];
    a[y]=temp;
    cout<<"after swapping the array values are\n";
    for(int i=0;i<n;i++)
    cout<<a[i]<<endl;
}
int main()
{
    int a[18];
    int n,i;
    cout<<"enter the size of array\n";
    cin>>n;
    cout<<"enter the array elements\n";
    for(i=0;i<n;i++)
    cin>>a[i];
    cout<<"before swpping the array values are\n";
    for(i=0;i<n;i++)
    cout<<a[i]<<endl;
    swap(a,n);
    return 0;
}