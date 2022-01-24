//stl sort

#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
void show(int a[],int arrysize){
    for(int i=0;i<arrysize;i++){
        cout<<a[i]<<","<<endl;
    }
}
int main(){
    int a[10];
    //={5,9,99,36,6,4,8,85,32,91};
    cout<<"enter the array element"<<endl;
    for(int i=0;i<10;i++){
        cin>>a[i];
    }
        int arysize=sizeof(a)/sizeof(a[0]);
        cout<<"array before sorting"<<endl;
        show(a,arysize);
        sort(a,a+arysize);
        cout<<"array after sorting"<<endl;
        show(a,arysize);
    
}