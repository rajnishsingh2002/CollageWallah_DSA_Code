#include<iostream>
using namespace std;
// string f(string s,int ind,int n){
   
// }
int main(){
    string s="abcaz";
  int  n=s.size();
  string r;
   int j=0,i=n-1;
//    while (i<j)
//    {
//     swap(s[i],s[j]);
//     i++;
//     j--;
//    }
   
   
    for (int i = n-1; i>=0; i--)
    {
        cout<<s[i];
    }
    
}