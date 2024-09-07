#include<iostream>
using namespace std;
void square(int arr[],int n){
    int i=0,j=n-1,k=0;
    int ans[100];
    while (i<=j)
    {
    if (abs(arr[i])>abs(arr[j]))
    {
       ans[k++]=arr[i]*arr[i];
       i++;
    }
        else{
            ans[k++]=arr[j]*arr[j];
            j--;
        }
    }
    int l=0,m=n-1;
   while (l<=m)
   {
    swap(ans[l++],ans[m--]);
    
   }
   
    
    for (int i = 0; i < n; i++)
    {
        cout<<ans[i]<<" ";
    }
    
}
int main(){
    int arr[100]={-10,-5,1,4,5,6};
    square(arr,6);
    
}