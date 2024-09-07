#include<iostream>
using namespace std;
int reverse(int arr[],int n){
// bubble  sort-- repeatedely swap two adjecents of the elements , if it is wrong order
for(int j=0;j<n;j++){
for (int i = 0; i < n; i++)
{
    if (arr[i]==0)
    {
        swap(arr[i],arr[i+1]);
    }
    
}
}


   

}
int main(){
int arr[100]={0,5,25,9,4}; // 5 0 0 2 4- 5 0 2 0 4
// int *ptr=arr;
int arr2[100];
reverse(arr,5);
for (int i = 0; i < 5; i++)
{
    /* code */cout<<arr[i]<<" ";
}


}