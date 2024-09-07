#include<iostream>
using namespace std;

int multiple(int n){
    //base case
    
    if (n==0)
    {
        return 0;
    }
   
    

    //assuption 
    int num=0;
  num=multiple(n-1);
 

// if (n%2!=0)
// {
//    num=n+num;
// }
// else{
//     num=-n+num;
// }
// return num;

return multiple(n-1)+((n%2==0)?(-n):n);
    
}

int main(){
    int n=10;
    

  cout<< multiple(n);
}