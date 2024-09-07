#include<iostream>
using namespace std;
int main(){
    int arr[100]{1,2,21,3,1,2,1,2,5,6};
    int ans[4]={0};
    int n=10;
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++ )
        { 
      if (arr[i]==arr[j])
      {
       for (int k = j; k < n; k++)
       {
        arr[k]=arr[k+1];
       
       }
       j--;
       n--;
      }
       
      
        }
        
      
    }
    
    for (int i = 0; i < 10; i++)
    {
        cout<<arr[i]<<" ";
        
    }
    
}
