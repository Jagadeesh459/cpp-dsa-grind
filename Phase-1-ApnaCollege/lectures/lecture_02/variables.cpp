#include<iostream>
using namespace std;

int main()
{
    int a = 7;
    float b = 4.5f; // we write f to say it is a float type or else it stores as double
    char c = 'C';
    double d = 1.8;
    const int e = 18;
    unsigned int f = -1; // it stores only positive values

    cout<< a <<endl<<b<<endl<<c<<endl<<d<<endl<<e<<endl<<f<<endl;
    //type casting
    int g = (int)d; // data loss takes place in explicit type casting
    float h = a; // implicit type casting
   
    cout<< g <<endl<< h;

    return 0;
}