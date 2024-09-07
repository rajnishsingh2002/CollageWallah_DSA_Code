#include<iostream>
using namespace std;

int main(){
    int n=21612;

    string s=to_string(n);
    // cout<<s.length();

int i=0,j=s.length()-1;

while (i<=j)
{
    
       swap(s[i++],s[j--]);
    // if (s[i]==s[j])
    // {
    // }
    
    
}

if (to_string(n)==s)
{
  cout<<"palindrom";
}
else{
    cout<<"not palindrom";
}

cout<<s;








// int rev=0;

//     while (n>0)    1234
//     {
//         rev=rev*10+n%10;
//         n=n/10;
       
//     }
    
//    cout<<rev;
    
}