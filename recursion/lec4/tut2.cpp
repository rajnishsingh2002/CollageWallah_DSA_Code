#include<iostream>
#include<string>
using namespace std;
int main(){
    // 12521
    int n=12345;
    string s=to_string(n);
int j=s.size()-1;
int i=0;
    for(int i=0;i<j;)
    {
        swap(s[i],s[j]);
        i++;j--;
    }
    for (int i = 0; i < s.size(); i++)
    {
        cout<<s[i];
    }
    
}