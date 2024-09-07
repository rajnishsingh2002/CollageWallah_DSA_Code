#include<iostream>
using namespace std;

void sort(int arr[],int n){
    int i=0,j=n-1;
    while (i<=j)
    {
        if (arr[i]%2!=0 & arr[j]%2==0)
        {
            swap(arr[i++],arr[j--]);
        }
        else if (arr[i]%2==0)
        {
            i++;
        }
        else if (arr[j]%2!=0)
        {
            j--;
        }
        
    }
    
     
     for (int i = 0; i < n; i++)
     {
        cout<<arr[i]<<" ";
     }
     
}

int main(){
    int arr[]={1,2,3,4,5,6};
    sort(arr,6);
}