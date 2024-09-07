#include<iostream>
#include<vector>
using namespace std;
// find the diff between  the sumof element at even indices to the sum of elements at odd indices


int main(){
    vector<int> v(8);
    cout<<"enter the elemnets"<<endl;
    for (int i = 0; i < 6; i++)
    {
       cin>>v[i];
    }
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    int evenSum=0;
    int oddSum=0;
    for (int i = 0; i < v.size(); i++)
    {
        if (i%2==0)
        {
            evenSum+=v[i];
        }
        else{
            oddSum+=v[i];
        }
    }
    cout<<evenSum<<endl;
    cout<<oddSum<<endl;
    int d=evenSum-oddSum;
    cout<<d<<endl;
}