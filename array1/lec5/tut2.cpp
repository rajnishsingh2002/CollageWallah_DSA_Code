#include<iostream>
using namespace std;
//checkif we can partition the array into two subarray with equal sum.
//  more formally,check that the prefix sum of the array is equal to the suffix sum of rest of the array;


bool sum(int arr[],int n){
    int totalsum=0;
    for (int i = 0; i < 6; i++)
    {
        totalsum+=arr[i];
    }
    int ans=0,j=0;
    for (int i = 0; i < 6; i++)
    {
        ans+=arr[i];
        int suffex= totalsum-ans;
       if (ans==suffex)
       {
        cout<<suffex<<endl;
        return true;
       }
       

    }
    return false;
}
int main(){
    int arr[100]={1,2,3,4,5,5};
    cout<<sum(arr,6);
}