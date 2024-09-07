#include<iostream>
using namespace std;


int power(int n,int p){
    //base case
    if (p==1 || p==0)
    {
        return n;
    }
    //assuption n+f(n,p-1);

    //self work
    return n*power(n,p-1);
    
}

int f(int n,int d){  //153 ,3
    //base case
    if (n==0)
    {
        return 0;        /* code */
    }


    return power(n%10,d)+f(n/10,d);
    


}
int main(){

int n=12; //1+125+27
int d=0;
int n1=n;

while (n1>0)
{
    n1=n1/10;
    d++;
}



int result=f(n,d);

if (result==n)
{
    cout<<"no. is armstrong"<<endl;
}
else{
    cout<<"not a armstrong no. "<<endl;
}




}

