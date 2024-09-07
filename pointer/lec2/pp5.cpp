#include<iostream>
using namespace std;
int min(int arr[],int n){
    int temp;
    // for (int i = 0; i < n; i++)
    // {
         temp=arr[0];
        for (int j = 0; j < n; j++)
        {
            if (arr[j]<temp)
            {
                temp=arr[j];
            }
            
        }
        
    // }
    return temp;
}
int main(){

    int arr[100]={54,7,0,33,6,-88,11,67};
   cout<< min(arr,8);
}