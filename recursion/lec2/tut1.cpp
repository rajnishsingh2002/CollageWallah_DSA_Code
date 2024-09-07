#include<iostream>
using namespace std;

// find the sum of the digits of the given number using recursive function
int f(int n){
    if (n>=0 && n<=9){
        return n;

    }
    int l=n%10;
    n=n/10;
   
    int t=f(n)+l;
    return t;
    
}
int main(){
    int n;
    cout<<"enter the number"<<endl;
    cin>>n;
    cout<<f(n);
    // cout<<"ll";
  
}