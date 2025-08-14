#include<iostream>
using namespace std;
 
int main(){
    int n,i=1;
    double fact=1;
    cout<<"enter the value of n\n";
    cin>>n;
    while(i<=n){
        fact*=i;
        i++;
    }
    cout<<"the factorial is "<<fact;
    return 0;
}