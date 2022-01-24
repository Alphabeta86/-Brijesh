//multiple inheritance

#include<bits/stdc++.h>
using namespace std;
class A{
    public:
   A(){
       cout<<"enter the name"<<endl;
   }
    
};
class B{
    public:
    B(){
    cout<<"enter date of birth";
  }
};
//multiple inheritance
class C:public A, public B{

};
int main(){
    C obj;
    return 0;
}