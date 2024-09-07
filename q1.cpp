#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool sum(int arr[],int n,int k){
 
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = i+1; j < n; j++)
    //     {
    //         if (arr1[i]+arr1[j]==k)
    //         {
    //           return true;
    //         }
            
    //     }
        
    // }
    
    // return false;
    int i=0,j=n-1;
    while (i<j)
    {
        if(abs(arr[i]-arr[j])==k){
            return true;
        }
        else if (abs(arr[i]-arr[j])<k)
        {
            i++;
        }
        else if(abs(arr[i]-arr[j])>k){
            j--;
        }
        
    }
    return false;


}
int main(){
    // int n,m;
    // cout<<"enter the size of vector"<<endl;
    // cin>>n;
    /*vector<int>*/int arr1[6]={-5,10,15,20,26};
    // /*vector<int>*/int arr2[3]={2,5,6};
    // /*vector<int>*/int arr3[9];
    // cout<<n<<endl;
    int k;
    cout<<"enter the key "<<endl;
    cin>>k;
   int t= sum(arr1,5,k);
    if (t)
    {
        cout<<"yes"<<endl;
    }
    else{
        cout<<"false"<<endl;
    }
    
    
    
}