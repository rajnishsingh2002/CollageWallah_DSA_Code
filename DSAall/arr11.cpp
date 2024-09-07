#include<iostream>
#include<vector>
using namespace std;

void prefixSum(vector<int> v){
    int ans=0;

   for (int i = 0; i <v.size(); i++)
    {
        ans=ans+v[i];
     
        v[i]=ans;
        
    }
    
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    
}

int main(){

    vector<int> v={5,4,1,2,3}; //5 8 9 11 15

    prefixSum(v);
}