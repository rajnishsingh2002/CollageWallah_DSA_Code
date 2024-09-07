#include<iostream>
#include<vector>
using namespace std;

bool prefixSuffixSum(vector<int> v){

    int totalSum=0;
    for (int i = 0; i < v.size(); i++)
    {
       totalSum+=v[i];
    }
    
    int prefixSum=0;

    for (int i = 0; i < v.size(); i++)
    {
       prefixSum+=v[i];

       int suffixSum=totalSum-prefixSum;

       if (prefixSum==suffixSum)
       {
        return true;
       }
       

    }
    return false;
}

int main(){
    vector<int> v={6,2,4,3,1};
    cout<<prefixSuffixSum(v);
}