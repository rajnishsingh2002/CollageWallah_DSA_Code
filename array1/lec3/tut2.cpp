#include<iostream>
#include<vector>
using namespace std;

// count the number of triplet sum whose sum is equal to given value x;

int tripletSum(vector<int> v,int x){
   
    int count=0;
    for (int i = 0; i < v.size(); i++)
    {
        for (int j = i+1; j < v.size(); j++)
        {
            for (int k = j+1; k < v.size(); k++)
            {
                if (v[i]+v[j]+v[k]==x)
                {
                    count++;
                    cout<<v[i]<<" "<<v[j]<<" "<<v[k]<<endl;
                }
                
            }
            
        }
        
    }
    return count;
}
int main(){
    vector<int> v;
    cout<<"enter the elements of the array"<<endl;
    for (int i = 0; i < 6; i++)
    {
       int ele;
       cin>>ele;
       v.push_back(ele);
    }
    int x;
    cout<<"enter the value of x "<<endl;
    cin>>x;
   cout<< tripletSum(v,x);
}