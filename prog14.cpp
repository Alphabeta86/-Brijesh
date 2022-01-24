//stl binary search


#include<bits/stdc++.h>
using namespace std;
#include<algorithm>

int main(){
    int a[]={4,6,8,1,2,87,5,9,65};
    int ars=sizeof(a)/sizeof(a[0]);
    sort(a,a+ars);
    cout<<binary_search(a,a+ars,4); //output will be in 0 and 1
}