#include<iostream>

using namespace std;
int main()
{
    int a[18];
    int n,smallest;
    cout<<"enter the size of array: ";
    cin>>n;
    cout<<"enter the values into array\n";
    for(int i=0;i<n;i++)
    cin>>a[i];
    smallest = INT16_MAX;
    for(int i=0;i<n;i++)
    {
        smallest = min(a[i],smallest);
    }
    cout<<"the smallest element is: "<<smallest;
    return 0;
}