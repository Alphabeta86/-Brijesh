//stl reverse,max,min and sort for vector

#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    int a[]={4,89,4,621,5155,78,6,74,3,49,4,8};
    int n=sizeof(a)/sizeof(a[0]);
    vector<int> vect(a,a+n);
    int i;
    cout<<"before sorting"<<endl;
    for(i=0;i<n;i++)
    cout<<vect[i]<<",";
    cout<<"\n";
    sort(vect.begin(),vect.end());
    cout<<"after sorting"<<endl;
    for(i=0;i<n;i++)
    cout<<vect[i]<<",";
    cout<<"\n";
    reverse(vect.begin(),vect.end());
    cout<<"after reverse\n";
    for(i=0;i<n;i++)
    cout<<vect[i]<<",";
    cout<<"\n";
    cout<<"max element\n";
    cout<<*max_element(vect.begin(),vect.end())<<"\n";
    cout<<"\n";
    cout<<"min element\n";
    cout<<*min_element(vect.begin(),vect.end())<<"\n";
    
    
}