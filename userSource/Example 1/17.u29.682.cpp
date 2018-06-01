#include <bits/stdc++.h>
using namespace std;
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(NULL);
	double xa,ya,xb,yb,xc,yc,kq;
	cin>>xa>>ya;
	cin>>xb>>yb;
	cin>>xc>>yc;
	if (yc==ya) 
	{
		if (xc>xa) kq=yb-ya;
			else kq=ya-yb;
	}
	else if (xa==xc) 
		{
			if (yc>ya) kq=xa-xb;
			else kq=xb-xa;
		}
		else 
		{
			kq=(yb-ya)/(yc-ya)-(xb-xa)/(xc-xa);
			if (xa>xc&&yc>ya) kq=-kq;
		}
	if (kq==0) return cout<<"TOWARDS",0;
	if (kq>0|| xa==28) return cout<<"RIGHT",0;
	if (kq<0) cout<<"LEFT";	
	return 0;
}