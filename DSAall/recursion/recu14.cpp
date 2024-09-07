#include<iostream>
using namespace std;

int calpower(int n,int d){
    int ans2=0;

    while (n>0)
    {
        int ans=1;
        int num=n%10;
        for (int i = 0; i < d; i++)
        {
            ans=ans*num;
        }
        ans2+=ans;
        n=n/10;
    }
    

return ans2;
}

int main(){

    int n=153;
    int d=0;
    int n1=n;

    while (n1>0)
    {
        n1=n1/10;
        d++;
    }
    
   int r=calpower(n,d);

   if (r==n)
   {
    /* code */cout<<"armstrong no. "<<endl;
   }
   else{
    cout<<"not armstrong no. "<<endl;
   }
   
}