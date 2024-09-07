#include<iostream>
#include<vector>
using namespace std;

void sort(vector<int> v){
    int i=0;
    int j=v.size()-1;

    while (i<=j)
    {
        if (v[i]==0 && v[j]==1)
        {
            i++;
            j--;
        }
       else  if (v[i]==1 && v[j]==0)
        {
            swap(v[i++],v[j--]);
        }
       else  if (v[i]==0 )
        {
            i++;
        }
        else{
            j--;
        }

        
    }
    

    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    

}

int main(){
    vector<int> v={1,1,0,0,1,0,1,0};
    sort(v);
}