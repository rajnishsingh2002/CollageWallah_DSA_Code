#include<iostream>
#include<vector>
using namespace std;
// taking input frome the usre by using vector
int main(){
    vector<int> v;
    for (int i = 0; i < 5; i++)
    {
        int ele;
        cin>>ele;
        v.push_back(ele);
    }
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    
}