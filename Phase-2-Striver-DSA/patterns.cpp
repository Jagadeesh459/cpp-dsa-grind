#include<iostream>
#include<iomanip>
using namespace std;
void print1(int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        cout<<"*";
        cout<<endl;
    }
}
void print2(int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<i+1;j++)
        cout<<"*";
        cout<<endl;
    }
    
}
void print3(int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<i+1;j++)
        cout<<j+1;
        cout<<endl;
    }
    
}
void print4(int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<i+1;j++)
        cout<<i+1;
        cout<<endl;
    }
    
}
void print5(int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i;j++)
        cout<<"*";
        cout<<endl;
    }
    
}
void print6(int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i;j++)
        cout<<j+1;;
        cout<<endl;
    }
    
}
void print7(int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i-1;j++)
        cout<<" ";
        for(int j=0;j<2*i+1;j++)
        cout<<"*";
        cout<<endl;
    }
    
}
void print8(int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<i;j++)
        cout<<" ";
        for(int j=0;j<2*(n-i)-1;j++)
        cout<<"*";
        cout<<endl;
    }
    
}
void print9(int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i-1;j++)
        cout<<" ";
        for(int j=0;j<2*i+1;j++)
        cout<<"*";
        cout<<endl;
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<i;j++)
        cout<<" ";
        for(int j=0;j<2*(n-i)-1;j++)
        cout<<"*";
        cout<<endl;
    }
    
}
void print10(int n)
{
    int stars;
    for(int i=0;i<2*n-1;i++)
    {
        stars=i;
        if(i>n-1)
        stars=2*n-i-1;
        for(int j=0;j<stars;j++)
        cout<<"*";
        cout<<endl;
    }
    
}
void print11(int n)
{
    int num;
    for(int i=0;i<n;i++)
    {
        num=0;
        if(i%2==0)
        num=1;
        for(int j=0;j<i+1;j++)
        {
            cout<<num<<" ";
            num=1-num;
        }
        cout<<endl;
    }
    
}
void print12(int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<i+1;j++)
        cout<<j+1;
        for(int j=0;j<2*(n-i-1);j++)
        cout<<" ";
        for(int j=i+1;j>0;j--)
        cout<<j;
        cout<<endl;
    }
    
}
void print13(int n)
{
    int k=1;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<i+1;j++)
        cout<<k++;
        cout<<endl;
    }
    
}
void print14(int n)
{
    for(int i=0;i<n;i++)
    {
        for(char j='A';j<'A'+i+1;j++)
        cout<<j;
        cout<<endl;
    }
    
}
void print15(int n)
{
    for(int i=0;i<n;i++)
    {
        for(char j='A';j<'A'+n-i;j++)
        cout<<j;
        cout<<endl;
    }
    
}
void print16(int n)
{
    char ch='A';
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<i+1;j++)
        {
            cout<<ch;
        }
        ch++;
        cout<<endl;
    }
    
}
void print17(int n)
{
    for(int i=0;i<n;i++)
    {
        char ch='A';
        for(int j=0;j<n-i-1;j++)
        cout<<" ";
        for(int j=0;j<i+1;j++)
        {
            cout<<ch;
            ch++;
        }
        for(char j='A'+i-1;j>='A';j--)
        cout<<j;
        cout<<endl;
    }
    
}
void print18(int n)
{
    for(int i=0;i<n;i++)
    {
        for(char j='E'-i;j<='E';j++)
        cout<<j;
        cout<<endl;
    }
    
}
void print19(int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i;j++)
        cout<<"*";
        for(int j=0;j<2*i;j++)
        cout<<" ";
        for(int j=0;j<n-i;j++)
        cout<<"*";
        cout<<endl;
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<i+1;j++)
        cout<<"*";
        for(int j=0;j<2*n-2-2*i;j++)
        cout<<" ";
        for(int j=0;j<i+1;j++)
        cout<<"*";
        cout<<endl;
    }
    
}
void print20(int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<i+1;j++)
        cout<<"*";
        for(int j=0;j<2*(n-i-1);j++)
        cout<<" ";
        for(int j=0;j<i+1;j++)
        cout<<"*";
        cout<<endl;
    }
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        cout<<"*";
        for(int j=0;j<2*(i+1);j++)
        cout<<" ";
        for(int j=0;j<n-i-1;j++)
        cout<<"*";
        cout<<endl;
    }
}
void print21(int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==0 || i==n-1 || j==0 || j==n-1)
            cout<<"*";
            else
            cout<<" ";
        }
        cout<<endl;
    }
    
}
void print22(int n)
{
    int left,right,top,bottom;
    for(int i=0;i<2*n-1;i++)
    {
        for(int j=0;j<2*n-1;j++)
        {
            top=i;
            left=j;
            bottom=2*n-2-i;
            right=2*n-2-j;
            cout<<setw(3)<<n-min(min(top,bottom),min(left,right));
        }
        cout<<endl;
    }
    
}
int main()
{
    int n;
    cin>>n;
    print1(n);
    print2(n);
    print3(n);
    print4(n);
    print5(n);
    print6(n);
    print7(n);
    print8(n);
    print9(n);
    print10(n);
    // print11(n);
    // print12(n);
    // print13(n);
    // print14(n);
    // print15(n);
    // print16(n);
    // print17(n);
    // print18(n);
    // print19(n);
    // print20(n);
    // print21(n);
    // print22(n);
    return 0;
}