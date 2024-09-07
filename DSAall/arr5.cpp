#include<iostream>
#include<vector>
using namespace std;

void targetSum(vector<int>v,int key){
    int count=0;
    for (int i = 0; i < v.size(); i++)
    {
       for (int j = i+1; j < v.size(); j++)
       {
          if (v[i]+v[j]==key)
          {
            count++;
          }
          
       }
       
    }
    cout<<count<<endl;
}
void tripletSum(vector<int>v,int key){
    int count=0;
    for (int i = 0; i < v.size(); i++)
    {
       for (int j = i+1; j < v.size(); j++)
       {
         for (int k = j+1; k < v.size(); k++)
         {
             if (v[i]+v[j]+v[k]==key)
          {
            count++;
          }
         }
         
          
       }
       
    }
    cout<<count<<endl;
}

int main(){

    vector<int> v = {3,4,6,7,1};
    int key=11;

    targetSum(v,key);
    tripletSum(v,key);
}