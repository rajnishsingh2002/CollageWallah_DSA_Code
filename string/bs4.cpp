#include<iostream>
using namespace std;
int peak(int arr[],int n){
    int i=0,j=n-1;

    while (i<j)
    {
        int mid=(i+j)/2;
       if (arr[mid]<arr[mid+1])
       {
          i=mid+1;
       }else{
        j=mid;
       }
       
    }
    
    return i;
}

int main(){


    int arr[]={0,7,15,5,2}; // 0 10 12 15, 5 2

   cout<< peak(arr,5);
}