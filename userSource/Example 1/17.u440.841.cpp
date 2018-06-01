#include<iostream>
#include<cmath>
using namespace std;

int main(){
	long long x1,x2,x3,y1,y2,y3; cin>>x1>>y1>>x2>>y2>>x3>>y3;
	long long xa=x2-x1,ya=y2-y1,xb=x3-x2,yb=y3-y2,k=xa*yb-ya*xb;
	if(k<0) cout<<"RIGHT";
	else if(k>0) cout<<"LEFT";
	else cout<<"TOWARDS";
}
