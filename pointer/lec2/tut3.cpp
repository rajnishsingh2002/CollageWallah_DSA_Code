#include<iostream>
using namespace std;
int main(){

    int arr[3]={4,6,8};
    int *p1=&arr[0];
    // cout<<*p1++<<endl; // move pointer by 4 bytes
    // cout<<*p1<<endl;
    cout<<(*p1)++<<endl;  //first dereference then increment
    cout<<(*p1)++<<endl;
    cout<<arr[0]<<endl;

    return 0;
}