#include <iostream>
#include <vector>
using namespace std;

void rightRotate(vector<int> v ,int key)
{
   int  k = key % v.size();
    vector<int> v1;
    int n = v.size() - k;

    for (int i = n; i < v.size(); i++)
    {
        v1.push_back(v[i]);
    }
    for (int i = 0; i < n; i++)
    {
        v1.push_back(v[i]);
    }

    cout << "left " ;
    for (int i = 0; i < v1.size(); i++)
    {
        cout << v1[i] << " ";
    }
    cout<<endl;
}

void leftRotate(vector<int> v,int key)
{
   int k = key % v.size();
    vector<int> v1;

    for (int i = k; i < v.size(); i++)
    {
        v1.push_back(v[i]);
    }

    for (int i = 0; i < k; i++)
    {
        v1.push_back(v[i]);
    }

    cout << "right " ;
    for (int i = 0; i < v1.size(); i++)
    {
        cout << v1[i] << " ";
    }
}

int main()
{

    vector<int> v = {1, 2, 3, 4, 5}; // 4,5,1,2,3  // 3,4,5,1,2
    int k=4;
    rightRotate(v ,k);
    leftRotate(v,k);
}