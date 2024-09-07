#include<iostream>
#include<vector>
using namespace std;

// int lastOccu(vector<int> v,int key){

//     for (int  i = v.size()-1; i >=0; i--)
//     {
//        if (v[i]==key)
//        {
//         return i;
//        }
       
//     }
//     return -1;
// }
int lastOccu(vector<int> v,int key){
    int idx=-1;
    int count=0;
    for (int  i = 0; i <v.size(); i++)
    {
       if (v[i]==key)
       {
         idx=i;
         count++;
       }
       
    }
    cout<<"count is "<<count<<endl;
    return idx;
}

int main(){

    vector<int> v={5,9,8,5,9,7,5};

    cout<<lastOccu(v,5);
    
    
   
    
}