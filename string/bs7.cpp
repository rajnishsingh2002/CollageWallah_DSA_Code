#include<iostream>
using namespace std;

int square(int n){
    int i=0,j=n;
int ans=0;
    while (i<=j)
    {
        int mid=(i+j)/2;
        if (mid*mid==n)
        {
            return mid;
        }
        else if (mid*mid>n)
        {
            j=mid-1;
        }
        else{
            i=mid+1;
            ans=mid;
        }
        
        
    }
    return ans;
}


int main(){


    int n=50;

    cout<<square(n);
}