#include<iostream>
using namespace std;
void swap(int *a,int *b){
    int temp;
    // temp=*a;
    // *a=*b;
    // *b=temp;
    //without using third variable
    *a=*a+*b; //a=4,b=5==9
    *b=*a-*b; //b=4
    *a=*a-*b;
}
int main(){
    int x,y;
    cout<<"enter the value od x and y "<<endl;
    cin>>x>>y;
    swap(&x,&y);
    cout<<x<<" "<<y<<endl;
    int const *p  =&x;
    cout<<p<<" "<<*p<<endl;
    p=&y;
    cout<<*p<<" "<<p<<endl;
}