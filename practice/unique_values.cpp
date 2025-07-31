#include<iostream>
using namespace std;

void unique_values(int a[],int n)
{
    int count;
    cout<<"\nthe unique elements in the array are:\n";
    for(int i=0;i<n;i++)
    {
        count = 0;
        for(int j=0;j<n;j++)
        {
            if(a[i]==a[j] && i!=j)
            {
                count=1;
                break;
            }
        }
        if(count == 0)
        cout<<a[i]<<endl;
    }
}
using namespace std;
int main()
{
    int a[18],n,i;
    cout<<"enter the size of array: ";
    cin>>n;
    cout<<"enter the array values:\n";
    for(i=0;i<n;i++)
    cin>>a[i];
    cout<<"the array values are:\n";
    for(i=0;i<n;i++)
    cout<<a[i]<<" ";
    unique_values(a,n);
    return 0;
}