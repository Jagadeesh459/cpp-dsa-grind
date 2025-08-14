#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int count=0,key;
    vector<int>vec={1,2,3,4,5,6,7,8,9};
    cout<<"the vector values are\n";
    for(int i:vec)
    cout<<i<<" ";
    cout<<"\nenter the key value\n";
    cin>>key;
    for(int i:vec)
    if(i==key)
    count=1;
    if(count==1)
    cout<<"element found ";
    else
    cout<<"element not found";
    return 0;
}