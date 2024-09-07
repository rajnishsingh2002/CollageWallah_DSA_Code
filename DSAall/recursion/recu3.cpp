#include<iostream>
using namespace std;

    int sumOfDigit(int n){
        if (n>=0 && n<=9)
        {
            return n;
        }

        return (n%10)+sumOfDigit(n/10);
        
    }

int main(){
    int n=12345;

    cout<<sumOfDigit(n);
}