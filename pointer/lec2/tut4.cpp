#include<iostream>
using namespace std;
int main(){
     int arr[3]={5,8,10};
     int* p1=&arr[0];
     cout<<++*p1<<endl;  //dereference first then increment
     cout<<arr[0]<<endl;
     cout<<*++p1<<endl; //increment by 4 bytes then deference

}
