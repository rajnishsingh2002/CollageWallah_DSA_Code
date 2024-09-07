#include<iostream>
using namespace std;
// find the second largest elements of an array ;
int SecondLargest(int arr[],int n){
    int max=INT32_MIN;
    int maxIndex=-1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i]>max)
        {
            max=arr[i];
           maxIndex=i;
        }
        
    }
   
  arr[maxIndex]=-1;
  // ******* IF DUPLICTE ELEMENTS PRESENT IN ARRAY******   {5,6,139,203,203,1}
    //  for (int i = 0; i < n; i++)
//     {
//         if (arr[i]==max)
//         {
//             arr[i]=-1;
//         }
        
//     }
  
    int max2= arr[0];//INT32_MIN;
    for (int i = 0; i < n; i++)
    {
       if (arr[i]>max2)
       {
        max2=arr[i];
       }
        
    }
    return max2;
}
int main()
{
    int arr[100]={5,6,139,203,3,1};
   cout<< SecondLargest(arr,6);
}
