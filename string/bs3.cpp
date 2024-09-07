#include<iostream>
using namespace std;
int bsFirst(int arr[],int n){
    int i=0,j=n-1;
    int k=5;
    int ans=-1;
    while (i<=j)
    {
    int mid=(i+j)/2;
      if (arr[mid]==k)
      {
        ans=mid; 
        j=mid-1;
      }
      else if (arr[mid]<k)
      {
        i=mid+1;
      }else{
        j=mid-1;
      }
      
      
    }

    return ans;
}
int bsSecond(int arr[],int n){
    int i=0,j=n-1;
    int k=5;
    int ans=-1;
    while (i<=j)
    {
    int mid=(i+j)/2;
      if (arr[mid]==k)
      {
        ans=mid; 
        
        i=mid+1;
      }
      else if (arr[mid]<k)
      {
        i=mid+1;
      }else{
        j=mid-1;
      }
      
      
    }

    return ans;
}
int main(){
    int arr[]={1,5,5,5,6,6};
    int n=6;
   int f= bsFirst(arr,n);
    int s=bsSecond(arr,n);
    cout<<"first ocuurence "<<f<<endl;
    cout<<"first ocuurence "<<s<<endl;
    cout<<"total no. of ocuurence "<<(s-f)+1<<endl;

}