#include<iostream>
#include<vector>
using namespace std;

int main(){
    int arr[]={2,3,5,2,9,7,1};
    int n=sizeof(arr)/sizeof(arr[0]);

    int k=3;

   vector<int> arr2;
    int p=0;
    for (int i = 0; i <= n-k; i++)
    {
        int ans=0;
        for (int j = i; j < k+i; j++)
        {
           
           ans+=arr[j];
        }
        arr2.push_back(ans);
    }
    

    for (int i = 0; i < arr2.size(); i++)
    {
      cout<<arr2[i]<<" ";
    }
    
}