#include<iostream>
using namespace std;

int sum(int arr[],int n){
    int s=0;

    for (int i = 0; i < n; i++)
    {
    //    s=arr[i]+s;
    s+=arr[i];
    }
    
    return s;
}


int max(int arr[],int n){

    int m=arr[0];
    // int m=INT32_MIN;

    for (int i = 0; i < n; i++)
    {
       if (m<arr[i])
       {
        m=arr[i];
       }
       
    }
    return m;    

}

int ElePresent(int arr[],int n,int ele){

    for (int i = 0; i < n; i++)
    {
      if (arr[i]==ele)
      {
        return i;
      }
      
    }
    return -1;
}
int main(){

    int ele;
    cout<<"enter the element for search"<<endl;
    cin>>ele;
    // int arr[]={15,91,2,4,11};
    int n;
    cout<<"enter the size of array"<<endl;
    cin>>n;

    cout<<"enter the array ele"<<endl;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    


   cout<< sum(arr,5)<<endl;;
   cout<< max(arr,5)<<endl;
   cout<< ElePresent(arr,5,ele);

}