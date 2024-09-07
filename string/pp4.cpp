#include<iostream>
using namespace std;

int removeD(int arr[],int n){
int j=0;

for (int i = 0; i < n-1; i++)
{
   if (arr[i]!=arr[i+1])
   {
    arr[j++]=arr[i];
   }
   
}
arr[j++]=arr[n-1];

for (int i = 0; i < j; i++)
{
   cout<<arr[i]<<" ";
}

}

void sortA(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
       for (int j = i+1; j < n; j++)
       {
        if (arr[i]>arr[j])
        {
           swap(arr[i],arr[j]);
        }
        
       }
       
    }
    
}
int main(){
    int arr[]={8,5,7,8,6,7,1};
    // int arr[]={1,3,5,5,7,8,8,8};
    int n=sizeof(arr)/sizeof(arr[0]);
    sortA(arr,n);
    removeD(arr,n);
}