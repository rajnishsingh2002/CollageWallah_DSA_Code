#include<iostream>
using namespace std;

int fibonacciNo(int n){

   
    if (n==0 || n==1)
    {
       return n;
    }
    

   return fibonacciNo(n-1)+fibonacciNo(n-2);
   
    
}

int main(){
    int n=6;
// 0,1,1,2,3,5,8,13

cout<<fibonacciNo(n);

// int a=0,b=1;
// for (int i = 1; i <= 7; i++)
// {
//    int next=a+b;
//    a=b;
//    b=next;

//    cout<<next<<" ";
// }



}