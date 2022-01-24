//stl count() and find()

#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    int a[]={8,75,4,9,4,6,8,5,5,6,5};
    int arr=sizeof(a)/sizeof(a[0]);
    vector<int> vect(a,a+arr);
    cout<<count(vect.begin(),vect.end(),5)<<"\n";
    cout<<"reverse order\n";
    cout<<"is 6 is present?\n";
    find(vect.begin(),vect.end(),6);
}