#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n][n];
    for (int  i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin>>arr[i][j];
        }
        
    }
    int arr2[n][n];
    int j1,i1;
    for (int  i = 0; i < n; i++)
    {
        for (int j = n; j >0; j--)
        {
           arr2[i1][j1++]=arr[j][i];
        }
        i1++;
    }
    for (int  i = 0; i < n; i++)
    {
        for (int j = 0; j <n; j++)
        {
           cout<<arr2[i][j]<<" ";
        }
       cout<<endl;
    }
    
}