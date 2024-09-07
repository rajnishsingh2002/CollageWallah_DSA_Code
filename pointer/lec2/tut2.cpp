#include<iostream>
using namespace std;
int main(){
int x=9;
double d=87;
int *p1=&x;
double*p2=&d;
cout<<"size of int "<<sizeof(int)<<endl;
cout<<"size of double "<<sizeof(d)<<endl;
cout<<"p1"<<p1<<endl;
cout<<"p1+1 "<<p1+1<<endl;
cout<<"p1+2 "<<p1+2<<endl;
cout<<"p1+3 "<<p1+3<<endl;
cout<<"p1+4 "<<p1+4<<endl;
cout<<"for double"<<endl;

cout<<"p2 "<<p2<<endl;
cout<<"p2+1 "<<p2+1<<endl;
cout<<"p2+2 "<<p2+2<<endl;
cout<<"p2+3 "<<p2+3<<endl;
cout<<"p2+4 "<<p2-4<<endl;

}