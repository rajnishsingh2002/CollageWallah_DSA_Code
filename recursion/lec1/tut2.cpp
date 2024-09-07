#include<iostream>
using namespace std;
int f(int n){

    if (n==1)
    {
        return 1;
    }
    if(n==0)return 0;
    return f(n-1)+f(n-2);
}  
int main(){
    // 0 1 1,2,3,5,8,13....
    
  cout<<f(6);
}
