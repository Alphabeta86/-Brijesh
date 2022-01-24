//multilevel inheritance

#include<bits/stdc++.h>
using namespace std;
class A{
    public:
    A(){
        cout<<"brijesh kumar maurya";
    }
};
class B:public A{
    public:
    
};
class C:public B{
    
};
int main(){
    C obj;
    return 0;
}