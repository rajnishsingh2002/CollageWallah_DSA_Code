#include<iostream>
using namespace std;
void f(int arr[],int idx,int n){
    if (idx==n)
    {
        return ;
    }
    cout<<arr[idx]<<endl;
   f(arr,idx+1,n);
}
int main(){
    int arr[]={5,4,7,9,2};
    f(arr,0,5);
    int n=sizeof(arr);
    cout<<n<<endl;
}