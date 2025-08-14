#include<iostream>

using namespace std;
int main()
{
    int a = 4,b = 8;

    cout<<(a | b)<<endl;  //bitwise OR
    cout<<(a & b)<<endl;  //bitwise AND
    cout<<(a ^ b)<<endl;  //bitwise X-OR
    cout<<(a << b)<<endl; //left shift    a*pow(2,b)
    cout<<(a >> b);       //right shift   a/pow(2,b)
    return 0;
}   