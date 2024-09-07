#include <iostream>
using namespace std;
// int square(int arr[],int n,int k){
//     int i=0,j=n-1;
//     int ans=-1;
//     while (i<=j)
//     {
//        int mid=(i+j)/2;
//        if (arr[mid]>=k)
//        {
//         ans=mid;
//         j=mid-1;
//        }
//        else{
//         i=mid+1;
//        }

//     }
//     return ans;
// }
// int square(int arr[],int n,int k){
//     int i=0,j=n-1;
//     int ans=-1;
//     while (i<=j)
//     {
//        int mid=(i+j)/2;
//       if (arr[mid]<=k)
//       {
//         ans=mid;
//         i=mid+1;
//       }

//       else{
//         j=mid-1;
//       }

//     }
//     return ans;
// }


// int square(int arr[], int n)
// {
//   int i = 0, j = n - 1;
//   int ans = -1; // 3 4 5 1 2
//   while (i < j)
//   {
//     int mid = (i + j) / 2;
//     if (arr[mid] > arr[0])
//     {
//       i = mid + 1;
//     }
//     else
//     {
//       j = mid;
//     }
//   }
//   return i;
// }
int square(int arr[], int n)
{
  int i = 0, j = n - 1;
  int ans = -1; // 3 4 5 1 2
  while (i < j)
  {
    int mid = (i + j) / 2;
    if (arr[mid+1] > arr[mid])
    {
      i = mid + 1;
    }
    else
    {
      j = mid;
    }
  }
  return i;
}

int main()
{
  int arr[] = {3, 4, 5,6, 1, 2};

  cout << square(arr, 6);
}
