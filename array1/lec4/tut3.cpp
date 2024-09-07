#include<iostream>
using namespace std;

// given an array of integers 'a', move the all even integers at the begging of array follwed by odd integers. the relative order
// of even and odd integers does not matters ---->{1,2,3,4,5,6} 

void moveIntegers(int arr[],int n){
    int c1=0,c2=0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i]==0)
        {
            c1++;
        }
        
    }
    c2=c1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i]==1)
        {
            c2++;
        }
        
    }
    for (int i = 0; i < n; i++)
    {
       if (i<c1)
       {
        arr[i]=0;
       }
       else if (i<c2)
       {
        arr[i]=1;
       }
       else
       {
        arr[i]=2;
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
    int arr[100]={2,0,1,2,1,1};
    moveIntegers(arr,6);
    printArr(arr,6);
}