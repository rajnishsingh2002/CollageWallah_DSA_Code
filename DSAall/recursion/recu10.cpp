#include<iostream>
using namespace std;

void multiple(int n,int k){
    //base case
    if (k<1)
    {
        return;
    }

    //assuption 
 multiple(n,k-1);

  cout<<n*k<<" ";
    
}

int main(){
    int n=12;
    int k=5;

    multiple(n,k);
}