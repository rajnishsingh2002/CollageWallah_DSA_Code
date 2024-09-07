#include<iostream>
#include<algorithm>
#include<cstring>
#include<vector>

using namespace std;

bool anagram(string str1,string str2){

    vector<int> freq(26,0);

    for (int i = 0; i < str1.length(); i++)
    {
       int index;          //      0,1,2,3,4,5,....   i==0,1,2,3,4,5,6
       index=str1[i]-'a';  //      {3,1,2,1,0,0,....}
       freq[index]++;
       freq[str2[i]-'a']--;
    }

    for (int i = 0; i < 26; i++)
    {
       cout<<freq[i]<<" ";
    }
    cout<<endl;

    for (int i = 0; i < 26; i++)
    {
        if (freq[i]!=0)
        {
           return false;
        }
        
    }
    return true;
    
}

int main(){

   
      string str1="word";
      string str2="dowr";

     cout<< anagram(str1,str2);


}



