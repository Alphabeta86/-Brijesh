#include<iostream>
using namespace std;

int main(){
    cout<<"enter the value";
    int n,i,j;
    cin>>n;
    for(i=n;i>=-n;i--){
        if(i>0){
            for(j=1;j<=i;j++){
                cout<<"*";
            }
            cout<<"\n";
        }
        else if(i<0 & i>=-n){
            for(j=-1;j>=i;j--){
                cout<<"*";
            }
            cout<<"\n";
        }
        else{
           continue;
       }
    }
}