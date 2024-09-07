#include<iostream>
using namespace std;

int main(){
    string str="Govind Dev Ji";
    string str2="";
    int j=0;

    for (int i = 0; i < str.size(); i++)
    {
       if (str[i]==' ')
       {
        // str2+="-";
        str[j++]='-';
       }
       else{
        str[j++]=str[i];
        // str2+=str[i];
       }
       
    }
    cout<<str;
}