#include<iostream>
#include<algorithm>
#include<cstring>
#include<vector>

using namespace std;

string sortString(string str){

    vector<int> freq(26,0);

    for (int i = 0; i < str.length(); i++)
    {
       int index;          //      0,1,2,3,4,5,....   i==0,1,2,3,4,5,6
       index=str[i]-'a';  //      {3,1,2,1,0,0,....}
       freq[index]++;
    }

    for (int i = 0; i < 26; i++)
    {
       cout<<freq[i]<<" ";
    }
    cout<<endl;

    //sorted string
    int j=0;
    for (int i = 0; i < 26; i++)
    {
        while (freq[i]--)
        {
           str[j++]=i+'a';
        }
        
    }
    
    cout<<str;
}

int main(){

   
      string str="adcabac";

      sortString(str);


}
