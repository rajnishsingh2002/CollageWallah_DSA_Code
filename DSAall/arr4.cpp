#include<iostream>
#include<vector>
using namespace std;

void sumOfEle(vector<int > v){

    int even=0;
    int odd=0;
    for (int i = 0; i < v.size(); i++)
    {
        if (i%2==0)
        {
            even+=v[i];
        }
        else{
            odd+=v[i];
        }
        
    }
    cout<<"difference is "<<even-odd<<endl;
}

int main(){
    vector<int> v={2,5,4,7,9,8};

    sumOfEle(v);

}