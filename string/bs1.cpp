#include<iostream>
using namespace std;

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
       break;
      }
      else if (arr[mid]<k)
      {
        i=mid+1;
        ans=mid+1;
      }else{
        j=mid-1;
      }
      
      
    }

    return ans;
}
int main(){
    // int arr[]={1,3,4,5,7,16}; //6 4
    
   int arr[]={1,3,5,6};
    int n=4;
    
    // cout<<bsFirst(arr,n)<<endl;
    cout<<bsSecond(arr,n);


}