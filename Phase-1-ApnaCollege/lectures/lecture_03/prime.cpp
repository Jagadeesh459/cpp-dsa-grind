#include<iostream>

using namespace std;
int main()
{
    int n, i, flag;
    cout<<"enter the value of n : ";
    cin>>n;
    for(i=2;i<n;i++)
    {
        if(n%i==0){
            flag = 1;
            break;
        }
    }
    if(flag == 1)
    cout<<"the number is not a prime";
    else
    cout<<"the number is a prime";
    return 0;
}