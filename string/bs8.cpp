#include<iostream>
using namespace std;

bool isPossibleSol(int arr[],int n,int mid,int m){

int studentC=1;
int pageSum=0;

for (int i = 0; i <n ; i++)
{
    if (pageSum+arr[i]<=mid)
    {
       pageSum+=arr[i];
    }
    else{
        studentC++;
        if (studentC>m || arr[i]>mid)
        {
            return false;
        }
        pageSum=arr[i];
        
    }
    
}
return true;



}

int ans(int arr[],int n){
    int sum=0;
    int m=2;
    for (int  i = 0; i < n; i++)
    {
        sum+=arr[i];
    }
    
    int i=0,j=sum;
    int ans=-1;

    while (i<j)
    {
        int mid=(i+j)/2;
        if (isPossibleSol(arr,n,mid,m))
        {
            ans=mid;
            j=mid-1;
        }
        else 
        {
          i=mid+1;  
        }
        
        
        
    }
    
}

int main(){
    int arr[]={10,20,30,40};

    cout<<ans(arr,4);
}