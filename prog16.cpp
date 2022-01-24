//stl reverse,max,min and sort for array

#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    int a[]={8,75,4,9,4,6,8,5};
    int arr=sizeof(a)/sizeof(a[0]);
    reverse(a,a+arr);
    cout<<"reverse order\n";
    for(int i=0;i<arr;i++)
    cout<<a[i]<<",";
    cout<<"\n";
    cout<<"max element\n";
    cout<<*max_element(a,a+arr)<<"\n";
    cout<<"\n";
    cout<<"min element\n";
    cout<<*min_element(a,a+arr)<<"\n";
    cout<<"\n";
}