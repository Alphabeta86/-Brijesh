//function overloading

#include<bits/stdc++.h>
using namespace std;

void A(int a){
    cout<<"function A:"<<a<<endl;
}
void A(int a,int b){
    cout<<"addition="<<a+b<<endl;
}
int main(){
    A(7);
    A(5,6);
    return 0;
}