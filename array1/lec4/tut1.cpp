#include<iostream>
using namespace std;
// sort an array consisting only 0s and 1s;

// without using two pointer approach
// void sortArr(int arr[],int n){
//     int count=0;
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i]==0)
//         {
//            count++;
//         }
        
//     }
    
//     for (int i = 0; i < n; i++)
//     {
//         if (i<count)
//         {
//             arr[i]=0;
//         }
//         else{
//             arr[i]=1;
//         }
        
//     }
// }


// using two poiter approach

    void sortArr(int arr[],int n){
        int i=0,j=n-1;
        while(i<=j){
        if (arr[i]==1 && arr[j]==0)
        {
            swap(arr[i++],arr[j--]);
        }
        
        if (arr[i]==0)
        {
           i++;
        }
        if (arr[j]==1)
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
    int arr[100]={0,1,0,0,1 ,0,1};
    sortArr(arr,7);
   printArr(arr,7);
    
}