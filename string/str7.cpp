#include<iostream>
using namespace std;

int main(){
    string str="java world";
    int c=0;


    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] != ' ')
        {
           c++;
        }
        
    }
    cout<<c;
}