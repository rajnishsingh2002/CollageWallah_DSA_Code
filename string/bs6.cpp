#include<iostream>
using namespace std;
int pivote(int arr[],int n,int k){
    int i=0,j=n-1;

    while (i<j)
    {
        int mid=(i+j)/2;

        if (arr[mid]==k)
        {
            return mid;
        }
        else if (arr[i]<arr[mid])
        {
           if (k>=arr[i] && k<arr[mid])
           {
             j=mid-1;
           }
           else{
            i=mid+1;
           }
           
        }
        else{
            if (k>arr[mid] && k<=arr[j])
            {
                i=mid+1;
            }
            else{
                j=mid-1;
            }
            
        }
        
        
       
    }
    return i;
}

int main(){

    int arr[]={8,12,0,1,2,3};//
    // int arr[]={20,30,40,50,60,5,10};//1 2 3 4 5   4 5 1 2 3

//    cout<< pivote(arr,7,10);
   cout<< pivote(arr,6,3);
}