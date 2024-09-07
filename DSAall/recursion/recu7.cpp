#include<iostream>
using namespace std;

int sum(int arr[],int idx,int n){
    //base case
    if (idx==n-1)
    {
        return arr[idx];
    }
    
    // assuption -- let suppose this function sum(arr,idx+1,n) is correctlly run for it
    //self work

    return arr[idx]+sum(arr,idx+1,n);


}

int main(){
    int arr[]={4,3,9,11,2};

   cout<< sum(arr,0,5);
}