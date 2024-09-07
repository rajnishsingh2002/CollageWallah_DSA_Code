#include<iostream>
using namespace std;

int maxEle(int arr[],int idx,int n){

    //base case
    if (idx==n-1)
    {
        return arr[idx];
    }

    // assuption
    // maxEle(arr,idx+1,n) correctly work

    //self work
    return max(arr[idx],maxEle(arr,idx+1,n));

    
}

int main(){
    int arr[]={55,3,9,8,1,175};

   cout<< maxEle(arr,0,6);
}