#include<iostream>
using namespace std;
int main(){
// transpose of the metrix

    int m,n;
    cin>>m>>n;
    int arr[m][n];
    for (int  i = 0; i < m; i++)
    {
       for (int j = 0; j < n; j++)
       {
        cin>>arr[i][j];
       }
       
    }
    int tra[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m;j++)
        {
            tra[i][j]=arr[j][i];
        }
        
    }
    
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m;j++)
        {
            cout<<tra[i][j]<<" ";
        }
        cout<<"\n";
    }
    

}