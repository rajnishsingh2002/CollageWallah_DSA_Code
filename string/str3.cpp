#include<iostream>
#include<string>
#include<vector>
using namespace std;

bool anagram(string str1,string str2){

    if (str1.length()!=str2.length())
    {
        return false;
    }

    vector<int> freq1(26,0);
    for (int i = 0; i < str1.length(); i++)
    {
      int idx=str1[i]-'a';
      freq1[idx]++;
        
    }
    vector<int> freq2(26,0);
    for (int i = 0; i < str1.length(); i++)
    {
      int idx=str2[i]-'a';
      freq2[idx]++;
        
    }
    int j=0,k=0;
    for (int i = 0; i < 26; i++)
    {
        while (freq1[i]--)
        {
            str1[j++]=i+'a';
        }
        
    }
    for (int i = 0; i < 26; i++)
    {
        while (freq2[i]--)
        {
            str2[k++]=i+'a';
        }
        
    }
    cout<<str1<<endl;
    cout<<str2<<endl;
    
    if (str1==str2)
    {
        return true;
    }
    return false;

}

int main()
{
    string str1="kobo";
    string str2="book";

   cout<< anagram(str1,str2);
}