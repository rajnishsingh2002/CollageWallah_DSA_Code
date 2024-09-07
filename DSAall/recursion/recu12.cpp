#include<iostream>
using namespace std;

int main(){
    int arr[]={2,5,8,5,2};

    for (int i = 0; i < 5; i++)
    {
        for (int j = i+1; j < 5; j++)
        {
            if (arr[i]==arr[j])
            {
               arr[j]=-1; 
            }
            
        }
        
    }
    
    for (int i = 0; i < 5; i++)
    {
        if (arr[i]>0)
        {
            cout<<arr[i]<<" ";  
        }
        
    }
    
}