#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main(){
    string str="fun";

    int len=str.size();

    int len2=len*(len+1)/2;
    // vector<string> arr(len2);
    string arr[len2];
    int temp=0;

    for (int i = 0; i < len; i++)
    {
       for (int j = i; j <len ; j++)
       {
       arr[temp++]=str.substr(i,j+1);
        
       }
       
    }
    
    for (int i = 0; i <len2; i++)
    {
       cout<<arr[i]<<" "<<i<<endl;
    }
    

}