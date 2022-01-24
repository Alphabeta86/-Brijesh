//destructor
#include<iostream>
using namespace std;
 class my{
     public:
     int id;
     ~my(){
         cout<<"destructor called for:"<<id<<endl;
     }
};
int main(){
    my obj;
    obj.id=10;
    int i=0;
    while(i<5){
        my obj1;
        obj1.id=i;
        i++;
    }//scope of obj over
}//scope of obj1 over