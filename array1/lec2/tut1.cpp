#include<iostream>
#include<vector>
using namespace std;
//basic operation in vector array
int main(){
// 1.declartion   --->  vactor <data_type> vector_name;
                    // vactor<data_type> vector_name(size);
vector<int> v={5,8,58,1,5};
//2.size
cout<<v.size()<<endl;
//3. resize  --->  
// v.resize(7);
cout<<v.size()<<endl;
//4.capacity
cout<<v.capacity()<<endl;

//5. add element
v.push_back(100);
cout<<v[5]<<endl;
//6.insert --->> v.insert(position,element)
v.insert(v.begin()+2,25);
cout<<v[2]<<endl;
//7. delete --
v.pop_back();
cout<<v[5];
//8. eraze
for (int i = 0; i < v.size(); i++)
{
    cout<<v[i]<<" ";
}
cout<<endl;
v.erase(v.begin()+3);
cout<<v[3]<<endl;
//8.clear
v.clear();
cout<<v[2]<<endl;

}