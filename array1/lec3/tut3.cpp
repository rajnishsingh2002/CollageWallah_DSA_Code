#include<iostream>
using namespace std;

// find the unique number of given array where all elements are being repeated twice with one value being unique; 
//with array manipulation

void unique(int arr[],int n){
    
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (arr[i]==arr[j])
            {
                arr[i]=arr[j]=-1;//{-1,4,9,5,-1,9,5}--{-1,4,-1,5,-1,-1,5}--{-1,4,-1,-1,,-1-1,-1}
            }
            
        }
        
    }
    
}
int main(){
int arr[100]={2, 4, 9, 5 ,2, 9 ,5}; 
unique(arr,7);
for (int i = 0; i < 7; i++)
{
    
if (arr[i]>0)
{
   cout<<"unique is : "<<arr[i]<<endl;
}
}


}

// without array manipulation-->>  using XOR
// int unique(int arr[],int n){
//     int ans=0;
//     for (int i = 0; i < n; i++)
//     {
//         ans=ans^arr[i];
//     }
//   return ans;   
// }
// int main(){
// int arr[100]={2, 4,9, 5 ,4, 9 ,5};
// cout<<unique(arr,7);
// }