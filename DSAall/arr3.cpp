#include <iostream>
#include <vector>
using namespace std;

void greaterThan(vector<int> v)
{
    int c = 0;
    int key = 3;
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] > key)
        {
            // cout<<v[i]<<" ";
            c++;
        }
    }
    cout << c;
}

void sorted(vector<int> v2)
{
    int i = 0;
    bool issorted = true;
    for (int i = 1; i < v2.size(); i++)
    {
        if (v2[i] <= v2[i -1])
        {
            issorted = false;
        }
    }

    cout << issorted << endl;
}

int main()
{

    vector<int> v2 = {1, 2, 3, 4, 5};
    // vector<int> v2 = {11, 2, 13, 4, 1};

    // greaterThan(v);

    sorted(v2);
}