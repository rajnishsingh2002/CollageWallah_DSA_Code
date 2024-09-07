#include<iostream>
using namespace std;

void print(int arr[],int idx,int n){
    if ( n==idx)
    {
        return;
    }

    cout<<arr[idx]<<" ";
    
    print(arr,idx+1,n);
   
    
    
}

int main(){
 
    int arr[]={5,2,3,6,8};

    print(arr,0,5);
}