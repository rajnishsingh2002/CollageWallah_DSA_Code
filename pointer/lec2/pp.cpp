#include<iostream>
using namespace std;
int main(){
    //multification of the metrix;
    int r1,c1;
    cin>>r1>>c1;
    int arr[r1][c1];
    cout<<"enter the arr element"<<endl;
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
        cin>> arr[i][j];   
        }
        
    }
   cout<<"enter the size"<<endl;
    int r2,c2;
    cin>>r2>>c2;
    int arr2[r2][c2];
    cout<<"enter the arr element"<<endl;
    for (int i = 0; i < r2; i++)
    {
        for (int j = 0; j < c2; j++)
        {
        cin>> arr2[i][j];   
        }
        
    }
   if (c1!=r2)
   {
    cout<<"not possible multification"<<endl;
    return 0;
   }
  int c[r1][c2];
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            int v=0;
            for (int k = 0; k < c1; k++)
            {
                v+=arr[i][k]*arr2[k][j];
            }
            c[i][j]=v;
        }
        
    }
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            cout<<c[i][j]<<" ";
        }
        cout<<endl;
    }
    
    
}