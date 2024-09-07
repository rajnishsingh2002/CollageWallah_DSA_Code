#include<iostream>
using namespace std;

// given two value p and q find the p^q by using recursive function

int f(int p,int q){
    // base case
    if (q==0)
    return 1;
    return p*f(p,q-1);
    

}
int main(){
    int p,q;
    cout<<"enter the value of p and q"<<endl;
    cin>>p>>q;

    cout<<f(p,q);
}