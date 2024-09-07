#include<iostream>
using namespace std;
int main(){
    int x,y;
    cout<<"enter the value of x and y"<<endl;
    cin>>x>>y;
    int *p1=&x;
    int *p2=&y;
    int s=*p1+*p2;
    cout<<"sum is "<<s<<endl;
}