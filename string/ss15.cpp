#include<iostream>
#include<vector>
using namespace std;
void ans(vector<int> fre,int n){

for (int i = 0; i < 256; i++)
{
    cout<<fre[i]<<" ";
}

    int max=INT32_MIN,  min=INT32_MAX;
    char maxCH='\0';
    char minCH='\0';

    for (int i = 0; i < 256; i++)
    {
        if (fre[i]>0)
        {
            if (max<fre[i])
            {
                max=fre[i];
                maxCH=(char)i;

            }
            if (min>fre[i])
            {
                min=fre[i];
                minCH=(char)i;
            }
            
            
        }
        
    }
    cout<<"max "<<maxCH<<endl;
    cout<<"min "<<minCH<<endl;


}


int main(){
    string str="grass is greener on the other sidde";
    int n=str.size();

    vector<int> fre(256,0);

    for (int i = 0; i < n; i++)
    {
        if (str[i]!=' ')
        {
        // int idx=str[i]-'a';
        int idx=(int)str[i];
        fre[idx]++;
            
        }
        
    }
ans(fre,n);
   
    
}