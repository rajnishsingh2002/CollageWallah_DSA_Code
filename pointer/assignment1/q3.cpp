#include<iostream>
using namespace std;
int largest(int *a,int*b,int*c){
//3 4 10----3 10
if (*a>*b && *a>*c)
{
   
   cout<<"largest is a"<<*a<<endl;
}
if (*a<*b && *b>*c)
{
   
   cout<<"largest is b"<<*b<<endl;
}
if (*c>*b && *c>*a)
{
   
   cout<<"largest is c"<<*c<<endl;
}


}
void smallest(int *a,int*b,int*c){
//3 4 10----3 10
if (*a<*b && *a<*c)
{
   
   cout<<"smallest is a"<<*a<<endl;
}
if (*a>*b && *b<*c)
{
   
   cout<<"smallest is b"<<*b<<endl;
}
if (*c<*b && *c<*a)
{
   
   cout<<"smallest is c"<<*c<<endl;
}


}
int main(){
    int x,y,z;
    cout<<"enter the value of x and y,z"<<endl;
    cin>>x>>y>>z;
    largest(&x,&y,&z);
    smallest(&x,&y,&z);
}