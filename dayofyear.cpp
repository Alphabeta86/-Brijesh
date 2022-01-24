#include<iostream>
#include<string>
using namespace std;
int leapyear(int y){
	if(y%400==0 | y%100!=0 & y%4==0){
		return 1;
	}
	else{
		return 0;
	}
}
int main(){
	int d,m,y,x1,r,day,yc1,odd=0;
	cout<<"Enter the day,month and year to check for day\n";
	cout<<"enter day\n";
	cin>>d;
	cout<<"Enter month\n";
	cin>>m;
	cout<<"Enter year\n";
	cin>>y;
	int marr[]={0,3,3,6,1,4,6,2,5,0,3,5};
	int marrl[]={6,2,3,6,1,4,6,2,5,0,3,5};
	string week[]={"Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday"};
	int n=leapyear(y);
	int yarr[]={6,4,2,0};
	int yc=y/100;
	if(yc==12 | yc==16 | yc==20){
	    yc1=yarr[0];
	}
	if(yc==13 | yc==16 | yc==21){
	    yc1=yarr[1];
	}
	if(yc==14 | yc==18 | yc==22){
	    yc1=yarr[2];
	}
	if(yc==15 | yc==19 | yc==23){
	    yc1=yarr[3];
	}
	
	if(n==1){
		r=y%100;
		x1=r+(r/4);
		odd=d+marrl[m-1]+x1+yc;
		day=odd%7;
		cout<<"Day of given date:\t"<<week[day]<<endl;
	}
	else if(n==0){
		r=y%100;
		x1=r+(r/4);
		odd=d+marr[m-1]+x1+yc1;
		day=odd%7;
		cout<<"Day of given date:"<<week[day]<<endl;
	}
}