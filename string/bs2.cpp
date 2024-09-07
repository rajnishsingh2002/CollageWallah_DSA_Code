#include<iostream>
using namespace std;

int sb(int arr[],int n,int t){
    int ans=-1;
     for (int i = 0; i < n; i++)
    {
        if (arr[i]==t)
        {
           ans=i;
           
        }
        
    }
    if (ans==-1)
    {
        /* code */
    }
    
}
int main(){
    int arr[]={1,3,5,6};
    // int arr[]={1,3,4,5,6,16};
    int n=4;
    int t=2;
    cout<<sb(arr, n,t);
   
    
}