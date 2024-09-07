#include<iostream>
using namespace std;

// search a given element in the array whether it is present or not if not present return -1 and present
//return the index

int searchEle(int arr[],int n,int key)
{
    int ans=-1;
    for (int i = 0; i < n; i++)
    {
    if (arr[i]==key)
    {
       ans=i;
    }
    
    }
    return ans;
   
}

int main(){
    int arr[100];
    int n;
    cout<<"enter the size of the array"<<endl;
    cin>>n;
cout<<"enter the elements of the array"<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int k;
    cout<<"enter the element which you want to search"<<endl;
    cin>>k;
  int s=searchEle(arr,n,k);
   cout<<s<<endl;
    
}