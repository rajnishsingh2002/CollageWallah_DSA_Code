#include<iostream>
using namespace std;

string palindrom(string str){
    int n=str.size();
    int i=0,j=n-1;

    while (i<j)
    {
        char ch=str[i];
        str[i]=str[j];
        str[j]=ch;
        i++,j--;
    }
   return str;
}

int main(){
    string str="kayak";

    if (palindrom(str)==str)
    {
       cout<<"palindrom";
    }
    else{
        cout<<"not palindrom";
    }
}