#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
// given an integer arr 'a' , return the prefix sum/running sum of same array without creating new array
void prefixSum(int arr[],int n){
int ans=0;
int j=0;
    for (int i = 0; i < n; i++)
    {
       ans+=arr[i];
       arr[j++]=ans;
    }
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}
int main(){
    //{5,4,1,2,3} -->> {5,9,10,12,15}
    int arr[100]={5,-4,1,2,3};
    prefixSum(arr,5);
    
    

}