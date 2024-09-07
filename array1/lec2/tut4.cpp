#include<iostream>
#include<vector>
using namespace std;
//count the number of occurences of the particular element x in the vector

int main(){
    vector<int> v;
    int x;
    cout<<"enter the element"<<endl;
    for (int  i = 0; i < 6; i++)
    {
        int ele;
        cin>>ele;
        v.push_back(ele);

    }
    cout<<"enter the element x for count"<<endl;
    cin>>x;
    // {2,5,6,9,5,8}  5
    int count=0;
    for (int i = 0;i<v.size() ; i++)
    {
        if (v[i]==x)
        {
            count++;
        }
        
    }
    cout<<"the number of occurrence is "<<count<<endl;
    
}