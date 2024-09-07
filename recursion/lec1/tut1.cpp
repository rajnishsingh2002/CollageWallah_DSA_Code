#include<iostream>
using namespace std ;
// factorial of the nuber using recursion
int fact(int n){
    // base case
    if (n==1 or n==0)
    {
        return 1;
    }
    // assuption n*fact(n-1)
    return n*fact(n-1);  //self work
    
}
int main(){
    // int n;
    // cout<<"enter the number"<<endl;
    // cin>>n;
   int f= fact(5);
   cout<<"factorial of the number is : "<<f<<endl;
}