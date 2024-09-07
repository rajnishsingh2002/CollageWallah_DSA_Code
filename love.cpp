#include<iostream>
using namespace std;
int peak(int arr[],int n,int k){
    int s=0,e=n-1;
    while (s<e)
    {
       int mid=s+(e-s)/2;
       if (arr[mid]==k)
       {
        return mid;
       }
       
       else if (arr[mid]>arr[s])
       {
         if (k>=arr[s]&&k<arr[mid])
         {
            e=mid-1;
         }
         else{
            s=mid+1;
         }
         
       }
       else{
        if (k>=arr[mid+1]&&k<=arr[e])
        {
            s=mid+1;
        }else{
            e=mid-1;
        }
        
       }
       
    }
    return s;
}
int main(){
    int arr[100]={3,8,10,1,2};
    cout<<"peak element is "<<peak(arr,5,8);
}