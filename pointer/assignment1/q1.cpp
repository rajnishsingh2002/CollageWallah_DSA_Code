#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"enter the value "<<endl;
    cin>>a;
    int *p=&a;//decration and initilization of pointer
    cout<<"the address of a is "<<p<<endl;
    cout<<"the value at address a is  "<<*p<<endl;

}