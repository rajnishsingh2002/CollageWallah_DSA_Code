#include<iostream>
#include<vector>
using namespace std;

int sum(int v[] ,int n,int k){
 int arr1[5];
 int i1=0;
   for (int i = n-k; i < n; i++)
   {
     arr1[i1++]=v[i];
     
     
   }
   for (int i = 0; i <=k; i++)
   {
    arr1[i1++]=v[i];
   }
   
  for (int i = 0; i < n; i++)
  {
    cout<<arr1[i]<<" ";
  }
  
}

int main(){

    int v[6]={3,1,9,1,11};
  
    int s=sum(v,5,2);
    cout<<"second largest ele is "<<s<<endl;

    
   

}