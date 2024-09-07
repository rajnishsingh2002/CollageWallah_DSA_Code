#include <iostream>
using namespace std;
string removeA(string &s, int idx, int n)
{
    // base case
    if (idx == n)
    {
        return "";
    }
    string current ;
    current += s[idx];
    return ((s[idx] == 'a') ? "" : current) + removeA(s, idx + 1, n);
}
int main()
{
    string s = "abcax";
    int n = s.size();
    cout<<n<<endl;
    cout<<removeA(s, 0, n);
}