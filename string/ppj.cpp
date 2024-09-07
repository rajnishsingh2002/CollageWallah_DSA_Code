#include<iostream>
#include<vector>
using namespace std;


int main(){
	string str="adbcadz";  //aabcddz
	vector<int> fre(26,0);
 
	int j=0;
	for (int i = 0; i < str.size(); i++)
	{
		int s=str[i]-'a';//          0 1 2 3 4 5
		fre[s]++;           //fre[]={2,1,1,2,0,0}
	}

	for (int i = 0; i < 26; i++)
	{
		while (fre[i]--)
		{
		   str[j++]=i+'a';
		}
		
	}
	
cout<<str<<endl;





}