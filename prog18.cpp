//std::partitioned

#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    vector<int> vect={5,4,2,3,6,9,5,8,2};
    is_partitioned(vect.begin(),vect.end(),[](int x){
        return x%2==0;
    }
        )?cout<<"partitioned\n":cout<<"not partitioned\n";
        partition(vect.begin(),vect.end(),[](int x){return x%2==0;});
            is_partitioned(vect.begin(),vect.end(),[](int x){
        return x%2==0;
    }
        )?cout<<"partitioned\n":cout<<"not partitioned\n";
        for(int i=0;i<9;i++){
            cout<<vect[i]<<",";
        }
}