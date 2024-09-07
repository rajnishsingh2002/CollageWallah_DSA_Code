#include<iostream>
#include<vector>
using namespace std;
int square(int arr[],int n){
    int arr2[100];
    int j=0;
    for (int i = 0; i < n; i++)
    {
        arr2[j++]=arr[i]*arr[i];
        
    }
    
    for (int i = 0; i < n; i++)
    {
       cout<<arr2[i]<<" ";
    }
    cout<<endl;
    for (int i = 0; i < n-1; i++)
    {   int index1=i;
        for (int j = i+1; j < n; j++)
        {
            if (arr2[index1]>arr2[j])
            {
                index1=j;
            }
            
        }
        swap(arr2[i],arr2[index1]);
    }
    
    for (int i = 0; i < n; i++)
    {
       cout<<arr2[i]<<" ";
    }
    
}
int main(){
    int arr[100]={-5,-4,-3,0,1,2};
    square(arr,6);
}