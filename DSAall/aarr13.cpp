#include<iostream>
#include<vector>
using namespace std;

void querysum(vector<int> v,int n){
    
    int prefix=0;
    for (int i = 1; i <= n; i++)
    {
      prefix+=v[i];
      v[i]=prefix;
    }

    int q;
    cin>>q;

    while (q--)
    {
        int l,r;
        cin>>l>>r;

        int ans=v[r]-v[l-1];
        cout<<ans<<endl;
    }
  
    
}

int main(){
    int n;
    cin>>n;
    vector<int> v(n+1,0);
    for (int i = 1; i <= n; i++)
    {
       cin>>v[i];
    }

    querysum(v,n);
}