#include<iostream>
#include<vector>
using namespace std;

void square(vector<int> v){
    vector<int> v2;

    int i=0,j=v.size()-1;

    while (i<=j)
    {
       if ( abs(v[i])  > abs(v[j]) )
       {
           v2.push_back(v[i]*v[i]);
           i++;
       }
       else{
        v2.push_back(v[j]*v[j]);
        j--;
       }
       
    }
    
    for (int i = v.size()-1; i >=0; i--)
    {
        cout<<v2[i]<<" ";
    }
    
}

int main(){

    vector<int> v={-10,-3,1,5,6};
    square(v);
}