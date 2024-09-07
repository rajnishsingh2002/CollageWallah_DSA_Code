#include<iostream>
using namespace std;

// given an array of integers 'a', move the all even integers at the begging of array follwed by odd integers. the relative order
// of even and odd integers does not matters ---->{1,2,3,4,5,6} 

void moveIntegers(int arr[],int n){
    int i=0,j=n-1;
    while (i<j)
    {
        if (arr[i]%2!=0 && arr[j]%2==0)
        {
            swap(arr[i++],arr[j--]);
        }
        if (arr[i]%2==0)
        {
           i++;
        }
        if (arr[j]%2!=0)
        {
           j--;
        }
        
    }
    
}

void printArr(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}
int main(){
    int arr[100]={1,2,3,4,5,6};
    moveIntegers(arr,6);
    printArr(arr,6);
}