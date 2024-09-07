#include<iostream>
using namespace std;
void countFirstAndSecondIdex(string s,char ch,int *f,int* l){
for (int i = 0; i < s.size(); i++)
{
    if (s[i]==ch)
    {
       *f=i;
       break;
    }
    
}
for (int i = s.size()-1; i >=0; i--)
{
    if (s[i]==ch)
    {
        *l=i;
        break;
    }
    
}

}
int main(){
    string x;
     cout<<"enter the values of x and y "<<endl;
    cin>>x;
    char ch;
    cout<<"enter the charcter which you want to count"<<endl;
    cin>>ch;
    int first=-1;
    int second=-1;
    
    countFirstAndSecondIdex(x,ch,&first,&second);
    cout<<first<<" "<<second<<endl;
    return 0;
}