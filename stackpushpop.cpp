//using array
#include<iostream>
using namespace std;
#define M 101
int a[M];
int top=-1;
void push(int x){
    if(top==M-1){
        cout<<"overflow\n";
        return;
    }
    a[++top]=x;
}
void pop(){
    if(top==-1){
        cout<<"Underflow\n";
        return;
    }
    top--;
}
void print(){
    cout<<"stack:";
    for(int i=0;i<=top;i++)cout<<a[i]<<" ";
    cout<<endl;
}
int main(){
    push(2);
    print();
    push(5);print();
    push(10);print();
    pop();print();
    push(12);print();
}