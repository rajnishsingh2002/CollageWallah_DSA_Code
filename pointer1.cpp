#include<iostream>
using namespace std;
int sum(int &p1,int &p2){
    p1=9;
    int s=p1+p2;
    return s;
}
int main(){
    int x,y;
cout<<"enter the value of x and x"<<endl;
cin>>x>>y;
// int *x1=&x;
// int *x2=&y;
// cout<<*x1<<" "<<x1<<endl;
cout<<sum(x,y);
}