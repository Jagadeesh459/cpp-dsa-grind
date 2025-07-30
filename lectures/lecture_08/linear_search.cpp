#include<iostream>

using namespace std;
int main()
{
    int a[18],n,target,count,i;
    cout<<"enter the size of array: ";
    cin>>n;
    cout<<"enter array values\n";
    for( i=0;i<n;i++)
    cin>>a[i];
    cout<<"enter taret element: ";
    cin>>target;
    for( i=0;i<n;i++)
    {
        if(a[i]==target)
        {
            count = 1;
            break;
        }
    }
    if(count == 1)
    cout<<"element found at index: "<<i;
    else
    cout<<"element not found";
    return 0;
}