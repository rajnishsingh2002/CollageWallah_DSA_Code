#include<iostream>
using namespace std;
void f(int n, int k){
    // base case
    if (k<1)
    {
        return;
    }
    

f(n,k-1);
cout<<n*k<<" ";
}

int main(){
    int n=3;
    int k=4;
    f(n,k);
}