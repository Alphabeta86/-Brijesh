// C++ program to demonstrate working strchr()
#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main(){
    string str;
    int l,i=0, c=1;
    cout<<"enter the string\n";
    getline(cin,str);
    l=str.length();
    while(i<l){
        if(isspace(str[i])){
            c=c+1;
        }
        i++;
    }
    cout<<c;
}