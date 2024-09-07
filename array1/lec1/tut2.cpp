#include<iostream>
using namespace std;

// sum of array elements

int sum(int arr[],int n)
{
    int s=0;
    for (int i = 0; i < n; i++)
    {
      s+=arr[i];
    }
    return s;
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
    cout<<"sum of the elements is : "<<sum(arr,n);
}