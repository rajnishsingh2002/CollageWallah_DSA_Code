#include<iostream>
using namespace std;

int main(){

    string str="Remove White Spaces";
    string str2="";
        int j=0;
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i]!=' ')
        {
            str2+=str[i];
            // str[j++]=str[i];
        }
      
    }
   
// cout<<str;
cout<<str2;

}