#include<iostream>

using namespace std;
int main()
{
    int a[18];
    int sum=0,product=1,n;
    cout<<"enter the size of array: ";
    cin>>n;
    cout<<"enter the values into array\n";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        sum+=a[i];
        product*=a[i];
    }
    cout<<"the sum of elements is: "<<sum<<endl;
    cout<<"the product of elements is: "<<product;
    return 0;
}