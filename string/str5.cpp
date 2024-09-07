#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main(){

    // string str="agba";

    // vector<int> v(128,-1);
    // v[103]=1258; 
    // cout<<v[str[1]]<<endl;

    int arr[]={5,3,2,1,9};
    int n=5;

    int i=0, j=n-1;

    while (i<j)
    {
    //    swap(arr[i],arr[j]);
    // int temp=arr[i];
    // arr[i]=arr[j];
    // arr[j]=temp;

    



       i++,j--;
    }
    
for (int i = 0; i < n; i++)
{
    cout<<arr[i]<<" ";
}

    

} 