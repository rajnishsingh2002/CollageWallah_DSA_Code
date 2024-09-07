#include<iostream>
#include<vector>
using namespace std;

void moveInteger(vector<int> v){
    int i=0;
    int j=v.size()-1;

    while (i<j)
{
        if (v[i]%2!=0 && v[j]%2==0)
        {
            swap(v[i++],v[j--]);
        }
        

        if (v[i]%2==0)
        {
           i++;
        }
        if (v[j]%2!=0)
        {
           j--;
        }
        
    }

    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    
    
}

int main(){


    vector<int> v={1,2,3,4,5};
    moveInteger(v);
}