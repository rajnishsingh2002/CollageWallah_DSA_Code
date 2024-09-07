#include<iostream>
using namespace std;
int pivote(int arr[],int n){
    int i=0,j=n-1;

    while (i<j)
    {
        int mid=(i+j)/2;

        if (arr[mid]>=arr[0])
        {
            i=mid+1;
        }
        else{
            j=mid; //
        }
       
    }
    return i;
}

int main(){

    int arr[]={8,12,1,2,3};//

   cout<< pivote(arr,5);
}