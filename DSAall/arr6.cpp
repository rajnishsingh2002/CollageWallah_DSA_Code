#include<iostream>
#include<vector>
using namespace std;

// void unique(vector<int>v){
//      int ans=0;

//      for (int i = 0; i < v.size(); i++)
//      {
//         ans=ans^v[i];
//      }
     
//     cout<<ans<<endl;

// }
void unique(vector<int>v){
     int ans=0;

     for (int i = 0; i < v.size(); i++)
     {
      for (int j = i+1; j < v.size(); j++)
      {
        if (v[i]==v[j])
        {
           v[i]=v[j]=-1;
        }
        
      }
      
     }
 for (int i = 0; i < v.size(); i++)
 {
    if (v[i]>0)
    {
    cout <<v[i]<<" ";
        
    }
    
 }
 

}

int secondLargest(vector<int>v){

    int max1=v[0];
    int max1Idx=-1;
    for (int i = 0; i < v.size(); i++)
    {
       if (max1<v[i])
       {
        max1=v[i];
        max1Idx=i;
       }
       
    }

    v[max1Idx]=-1;

    int max2=v[0];
    for (int i = 0; i < v.size(); i++)
    {
        if (max2<v[i])
        {
            max2=v[i];
        }
        
    }
    
return max2;
    
}
int main(){
    vector<int> v={5,3,9,5,13,3,9};
    vector<int> v1={5,3,9,15,153,132,19};
    unique(v);
   cout<< secondLargest(v1);
}