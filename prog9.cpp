//interitance private,public & protected

#include<bits/stc++.h>
using namespace std;

class A{
    public:
    int x;
    private: 
    int z;
    protected:
    int y;
};
class B:public A{
    //x is public
    //y is protected
    //z is not accesible from B
};
class C:protected A{
    //x,y are protected
    //z is not accesible from C
};
class D:private A{
   // x,y are private
   //z is not accesible from D
};