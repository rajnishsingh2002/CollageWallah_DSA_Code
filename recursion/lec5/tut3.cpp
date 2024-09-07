#include<iostream>
using namespace std;

int f(int n){
    // base case
    if(n<1) return 0;
   return f(n-1)+ ((n%2==0)?(-n):n);
}
int main(){
    int n=5;  //1-2+3-4+5=3
    cout<<f(n);
}