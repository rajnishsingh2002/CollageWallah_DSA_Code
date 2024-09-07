#include<iostream>
#include<vector>
using namespace std;

bool checkAna(string str1,string str2){

    if (str1.size()!=str2.size())
    {
       return false;
    }
    


    vector<int> fre1(26,0);
    vector<int> fre2(26,0);
    for (int i = 0; i < str1.size(); i++)
    {
       int s=str1[i]-'a';
       fre1[s]++;
    }
    
    for (int i = 0; i < str2.size(); i++)
    {
       int s=str2[i]-'a';
       fre2[s]++;
    }
    
    for (int i = 0; i < 26; i++)
    {
        if (fre1[i]!=fre2[i])
        {
            cout<<"not anagran";
            return false;
        }
        
    }
   return true;
}

int main(){
    string str1="polo";
    string str2="pool";

   cout<< checkAna(str1,str2);
}