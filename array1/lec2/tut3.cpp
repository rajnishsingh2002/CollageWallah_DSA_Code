#include<iostream>
#include<vector>
using namespace std;
//find the last occurence of the element x in the vector array
int main(){
    vector<int> v;
    int x;
    cout<<"enter the value of x"<<endl;
    cin>>x;
    for (int  i = 0; i < 5; i++)
    {
        int ele;
        cin>>ele;
        v.push_back(ele);

    }
    // {2,5,6,9,5,8}  5

    // FIRST APPROACH********

    // for (int i = v.size()-1;i>=0 ; i--)
    // {
    //     if (v[i]==x)
    //     {
    //         cout<<"last occurence is "<<i<<endl;
    //         break;
    //     }
        
    // }

    // SECOND APPROACH********
    
    int temp=-1;
    for (int i = 0;i<v.size() ; i++)
    {
        if (v[i]==x)
        {
            temp=i;
        }
        
    }
    cout<<" last is "<<temp<<endl;
    
}