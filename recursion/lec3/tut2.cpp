#include<iostream>
using namespace std;
// print the maximum element of the an array
int max1(int arr[],int idx,int n){
    // base case
    if (n-1==idx)
    {
        return arr[idx];
    }
    
    return max(arr[idx],max1(arr,idx+1,n));


}
int main(){
    int arr[]={-95,9,3,85,7};
  cout<<max1(arr,0,5);  

} 