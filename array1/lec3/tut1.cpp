#include<iostream>
using namespace std;
// TARGET SUM OR PIAR SUM ---> find the total number of pair in the array whose sum is equal to given value x;

int pairSum(int arr[],int n){
        int key=7;
        int count=0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (arr[i]+arr[j]==key)
            {
               count++;
            }
            
        }
        
    }
    return count;
}

int main(){
int arr[100]={3,4,6,7,1};

   cout<<pairSum(arr,5);
}