#include<iostream>
using namespace std;

class complex{
    private:
    int a;
    int b;
    int c;
    public:
    void set_data(int x,int y){
        a=x,b=y;
        c=a+b;
    }
    // complex complexsum(complex z,complex z2){
        
    //      a=z2.a+z.a;
    //      b=z2.b+z.b;
         
    // } 
    void disp_data(void);
};
void complex :: disp_data(){
    // cout<<a<<"+ "<<b<<"i"<<endl;
    cout<<"c"<<c<<endl;
}


int main(){
complex o1,o2,o3;
o1.set_data(30,40);
o2.set_data(30,-50);
// o3.complexsum(o1,o2);
// o1.complexsum(o2);
o1.disp_data();
o2.disp_data();
}