#include <iostream>
using namespace std;

int main()
{
    string str1 = "lpt";
    string str2 = "lptigen";
    string str3 = "lpmhem";

   
    string ans="";
    for (int i = 0; i < str1.size(); i++)
    {
        if ((str1[i] != str2[i]) || (str1[i] != str3[i]))
        {
            
            break;
        }
        else
        {
            ans+= str1[i];
        }
    }

    cout << ans;
}