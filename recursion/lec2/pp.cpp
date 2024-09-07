#include<iostream>
using namespace std;
int f(int n){
    // base case
    if (n>=0 && n<=9)
    {
        return n;
    }
    int l=n%10;
    return l+f(n/10);
}
int main(){
    int n;
    cout<<"enter the number "<<endl;
    cin>>n;
    cout<<f(n);
}