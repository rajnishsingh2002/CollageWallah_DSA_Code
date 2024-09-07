#include<iostream>
using namespace std;
#include<vector>

int main(){
    string str="great responsbility";

    vector<int> fre(256,0);
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i]!=' ')
        {
            int idx=str[i];
            fre[idx]++;

        }
        
    }
    
    for (int i = 0; i < 256; i++)
    {
       if (fre[i]>1)
       {
        cout<<(char)i<<endl;
       }
       
    }
    
}