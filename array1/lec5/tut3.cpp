#include<iostream>
#include<vector>

using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> v(n+1,0);
    for (int i = 1; i <=n; i++)
    {
        cin>>v[i];

    }
    int ans=0;
    for (int i = 1; i <=n; i++)
    {
     ans+=v[i];
     v[i]=ans;  
    }
    // for (int i = 1; i <= n; i++)
    // {
    //     cout<<v[i]<<" ";
    // }
    cout<<endl;
    int q;
    cout<<"enter the queries"<<endl;
    cin>>q;
    while (q--)
    {
        int l,r;
        cin>>l>>r;
       int ans1=0;
        ans1=v[r]-v[l-1];
        cout<<ans1<<endl;
    }
    
    
}