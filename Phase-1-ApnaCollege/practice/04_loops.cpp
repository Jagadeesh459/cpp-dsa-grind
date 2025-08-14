#include <iostream>
using namespace std;
string name(int x);
string type(int x);
int main() {
    // Complete the code.
    int a,b,i;
    cin>>a>>b;
    
    for(i=a;i<=b;i++)
    {
        if((i>0)&&(i<=9))
        {
            cout<<name(i)<<endl;
        }
        else
        {
            cout<<type(i)<<endl;    
        }
    }

    return 0;
}
string name(int x)
{
    string s;
    if(x==1)
    s="one";
    else if(x==2)
    s="two";
    else if(x==3)
    s="three";
    else if (x==4)
    s="four";
    else if(x==5)
    s="five";
    else if(x==6)
    s="six";
    else if(x==7)
    s="seven";
    else if(x==8)
    s="eight";
    else if(x==9)
    s="nine";
    
    return s;
}
string type(int x)
{
    string s;
    if(x%2==0)
    {
        s="even";
    }
    else
    {
        s="odd";
    }
     
     return s;
}
