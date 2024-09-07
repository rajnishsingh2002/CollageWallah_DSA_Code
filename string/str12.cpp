#include<iostream>
#include<vector>
using namespace std;


void ans(string str,int n){
    vector<int> fre(256,0);

    int j=0;

for (int i = 0; i < n; i++)
{
    if ((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z'))
    {
   int idx=str[i];
   fre[idx]++;
        /* code */
    }
    
}

int max=INT32_MIN,min=INT32_MAX;
char minCH='\0', maxCH='\0';

for (int i = 0; i < 256; i++)
{
    if (fre[i]>0)
    {
        /* code */
    
    
    if (min>fre[i])
    {
       min=fre[i];
       minCH=(char)i;

    }
    if (max<fre[i])
    {
       max=fre[i];
       maxCH=(char)i;

    }
    }
}
cout<<"max occurre. "<<maxCH<<endl;
cout<<"min occurre. "<<minCH<<endl;

}

int main(){

    string str="graass is greener on the other side";
    int n=str.size();

    ans(str,n);
}