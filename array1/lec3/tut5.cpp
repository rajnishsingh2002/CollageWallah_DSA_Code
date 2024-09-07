#include<iostream>
#include<vector>

using namespace std;

 bool rotate(int arr[],int n)
 {
 int totalSum=0;
 for (int i = 0; i < n; i++)
 {
  totalSum+=arr[i];
 }
 
  
 int prefixSum=0;
 for ( int i=0 ; i < n; i++)
 {
  prefixSum+=arr[i];

  int suffexSum=totalSum-prefixSum;

  if (suffexSum==prefixSum)
  {
    return true;
  }
  
 }
 return false;
 
 
 }
int main(){
    int arr[100]={6,2,4,3,1}; //8,10,13,17,22
   
    
   cout<< rotate(arr,5);
}