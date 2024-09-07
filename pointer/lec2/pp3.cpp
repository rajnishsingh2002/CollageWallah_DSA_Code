#include<iostream>
using namespace std;
int main(){
    int m,n;
    cout<<"enter the size of array "<<endl;
    cin>>n>>m;
    int arr[n][m];
    cout<<"enter the elements of the array"<<endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin>>arr[i][j];
        }
        
    }
    int max=INT32_MIN;
    for (int i = 0; i < n; i++)
    {
       for (int j = 0; j < m; j++)
       {
       if (arr[i][j]>max)
       {
        max=arr[i][j];
       }
       
       }
       
    }
    cout<<"max element in the array is : "<<max<<endl;
}