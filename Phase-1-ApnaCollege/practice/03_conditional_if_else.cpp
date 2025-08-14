#include<iostream>
using namespace std;

int main()
{
    int a;
    string s;
    cin>>a;
    if((1<=a)&&(a<=9))
    {
        if(a==1)
        s="one";
        else if(a==2)
        s="two";
        else if(a==3)
        s="three";
        else if(a==4)
        s="four";
        else if(a==5)
        s="five";
        else if(a==6)
        s="six";
        else if(a==7)
        s="seven";
        else if(a==8)
        s="eight";
        else if(a==9)
        s="nine";
    }
    else 
    {
        s="Greater than 9";
    }
    cout<<s;
        
}
