#include<iostream>
using namespace std;
int maxEle(int arr[],int n){
    int max=arr[0];//INT32_MIN;
    for (int i = 0; i < n; i++)
    {
       if (arr[i]>max)
       {
        max=arr[i];
       }
       
    }
    return max;
}
int minEle(int arr[],int n){
    int min=  arr[0];  //INT32_MAX;
    for (int i = 0; i < n; i++)
    {
       if (arr[i]<min)
       {
        min=arr[i];
       }
       
    }
    return min;
}
int main(){
    int arr[100];
    int n;
    cout<<"enter the size of array"<<endl;
    cin>>n;
    cout<<"enter the elements of the array"<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
   cout<<"maximum element of the array is "<< maxEle(arr,n)<<endl;;
   cout<<"minimum element of the array is "<< minEle(arr,n);

}