#include<iostream>
using namespace std;
class operation {
	int a,b,add,sub,mul;
	float div;
	public:
	  void get();
	  void sum();
	  void difference();
	  void product();
	  void division();
};
inline void operation:: get(){
	cout<<"Enter the first value:";
	cin>>a;
	cout<<"Enter the second value:";
	cin>>b;
}
inline void operation:: sum(){
	add=a+b;
	cout<<"addition of two number:"<<add<<"\n";
}
inline void operation:: difference(){
    sub=a-b;
    cout<<"Difference between two number:"<<sub<<"\n";
}
inline void operation:: product(){
	mul=a*b;
	cout<<"product of two number:"<<mul<<"\n";
}
inline void operation :: division(){
	div=a/b;
	cout<<"Division of two number:"<<div<<"\n";
}
int main(){
	cout<<"Programming using inline function\n";
	operation s;
	s.get();
	s.sum();
	s.difference();
	s.product();
	s.division();
	return 0;
}