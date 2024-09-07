#include<iostream>
using namespace std;







int main(){
    
 int n= 2;
 int d=3;
int ans=1;
for (int i = 0; i < 4; i++)
{
   ans=ans*n;
}
   cout<<ans<<endl;








    //  squeance(4);

//     int arr[]={5,3,8,3,8,1,5,8};
//   int ans=0;
// for (int i = 0; i < 8; i++)
// {
//   ans=ans^arr[i];
// }
// cout<<ans;


  // cout<<sum(arr,6,0);

    // cout<<maxEle(arr,6,0);

    // printArr(arr,6,0);

  // cout<<square(3,4);  // 16


    // cout<<sumOfDigit(10);

    // cout<<fibonacci(6);  // 0 1 1 2 3 5 8 13 21

//    cout<< factorial(5); //4!  4*3*2*1
}
















// int factorial(int n){
//     //base case 
//     if (n==0 || n==1)
//     {
//         return 1;
//     }

//     //Assumption  n*fact(n-1);

//     //self work
//     return n*factorial(n-1);


// }




// int fibonacci(int n){

//     // base case 

//     if (n==1 || n==0)
//     {
//       return n;
//     }

//     // Assuption fibonacci(n-1) fibonacci(n-2)


//     //self work
//     return fibonacci(n-2)+fibonacci(n-1); 

    
    
// }



// int sumOfDigit(int n){

// // base case  
// if (n>=0 && n<=9)
// {
//   return n;
// }

// // assuption n%10 +sum(n/10)  4+ ,3+ , 2+ ,

// //self work

// return n%10+sumOfDigit(n/10);

// }


// int square(int n,int p){

// //base case
// if (p==0 || p==1)
// {
//   return n;
// }

// //Assuption n square(n,p-1);

// // self work

// return n*square(n,p-1);

// }


// void printArr(int arr[],int n,int i){

//   // base case 
//   if (i==n)
//   {
//    return ;
//   }

//   // assuption 

//   cout<<arr[i]<<" ";
//   i++;
// printArr(arr,n,i);
  
// }



// int maxEle(int arr[],int n,int i){

//   // base case 
// if (i==n-1)
// {
//  return arr[i];
// }

// //assuption arr[i] maxEle(arr,n,i+1)

// //self work
// int max=maxEle(arr,n,i+1);

// return (arr[i]>max?arr[i]:max);
// }


// int sum(int arr[],int n,int i){

//   // base case 
//   if (i==n-1)
//   {
//     return arr[i];
//   }

//   //assuption arr[i]  sum(arr,n,i+1)
  
//   //self work

//   return arr[i]+ sum(arr,n,i+1);

// }




// int squeance(int n){

//   // base case
//   if (n==0 )
//   {
//     return n;
//   }

//   //1234
// squeance(n-1);  
// cout<<n<<" ";
// }

