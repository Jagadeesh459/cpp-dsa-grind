#include<iostream>
#include<vector>
using namespace std;


int main()
{
    vector<int> vec(5,0);
    for(int i : vec)
    cout<<i<<" ";
    vec.push_back(1);
    cout<<"\nafter pushing 1\n";
    for(int i : vec)
    cout<<i<<" ";
    vec.pop_back();
    cout<<"\nvector after deleting last element is \n";
    for(int i : vec)
    cout<<i<<" ";
    
    return 0;
}