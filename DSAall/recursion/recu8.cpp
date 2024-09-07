#include<iostream>
using namespace std;

string RemoveOccu(string s,int idx){

    if (idx==s.length())
    {
        return "";
    }
string curr;

curr+=s[idx];

return ((s[idx]=='a')?"":curr)+RemoveOccu(s,idx+1);
    

}

int main(){
    string s="abcax";
   

    cout<<RemoveOccu(s,0);

    // cout<<s.length();
   
    




    // string s1;
    // for (int i = 0; i < s.length(); i++)
    // {
    //    if (s[i]!='a')
    //    {

    //     s1+=s[i];
        
    //    }
       
       
    // cout<<s1;

}