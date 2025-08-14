#include<iostream>

using namespace std;
int main()
{
    int n,count;
    cout<<"enter the value of n: ";
    cin>>n;
    for(int i=0;i<32;i++)
    {
        if(1<<i == n)
        {
            count =1;
            break;
        }
    }
    if(count == 1)
    cout<<"n is power of 2";
    else 
    cout<<"n is not a power of 2";
    return 0;
}