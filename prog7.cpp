//constructor
#include<iostream>
using namespace std;
 class my{
     public:
     int id;
     //Default
     my(){
         cout<<"default"<<endl;
         id=-1;
     }
     //parameterized
     my(int x){
         cout<<"parameterized"<<endl;
         id=x;
     }
};
int main(){
    my obj;
    cout<<obj.id<<endl;
    my obj1(99);
    cout<<obj1.id;
}