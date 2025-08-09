#include<iostream>
#include<vector>
using namespace std;
void reverse(vector<int> &vec)
{
    int temp;
    for(int i=0, j=vec.size()-1;i<j;i++,j--)
    {
        temp=vec[i];
        vec[i]=vec[j];
        vec[j]=temp;
    }
}
int main()
{
    vector<int>vec={1,2,3,4,5,6,7,8,9};
    cout<<"the vector values before reversing are\n";
    for(int i:vec)
    cout<<i<<" ";
    reverse(vec);
    cout<<"\n after reversing vector the vector values are\n";
    for(int i:vec)
    cout<<i<<" ";
    return 0;
}