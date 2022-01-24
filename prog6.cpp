//class & object
#include<bits/stdc++.h>
using namespace std;

class my{
    public:
    string s;
    int x,y,z;
    void add(){
        z=x+y;
        cout<<z<<endl;;
    }
    void name(){
        cout<<s<<endl;
    }
};
int main(){
    my obj,obj1;
    obj.s="brijesh";
    obj.x=3;
    obj.y=4;
    obj.add();
    obj.name();
    return 0;
}
