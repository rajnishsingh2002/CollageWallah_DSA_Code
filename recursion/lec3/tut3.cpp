#include<iostream>
using namespace std;
// find the sum of the values in an array 

int sumOfEle(int arr[],int idx,int n){
    if (idx==n-1)
    {
       return arr[idx];
    }
    return (arr[idx]+sumOfEle(arr,idx+1,n));
    
}
int main(){
    int arr[]={9,5,2,8,7};
    cout<<sumOfEle(arr,0,5);
}