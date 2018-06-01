#include <bits/stdc++.h>
using namespace std;
bool nt(long n)
{
	if (n<2) return false;
	for (int i=2;i<=sqrt(n);i++)
		if (n%i==0) return false;
	return true;
}
long gcd(long x,long y)
{
    int tmp;
    while(x!=0)
	{
    	tmp=y%x;
    	y=x;x=tmp;
    }
    return y;
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);
	long a,b,c,i,a1=0,b1=0,a0=0,b0=0,kq=0,tg;
	cin>>a>>b>>c;
	if (a>=c||b>=c||a+b>c||(a==b&&c%a!=0)||c%gcd(a,b)!=0) return cout<<0,0; 
	if (a<b)
	{
		tg=a;
		a=b;
		b=tg;
	}
	tg=a*b/gcd(a,b);
	for (i=1;i<=c/a;i++)
	if ((c-i*a)%b==0&&c!=i*a) 
	{
		a0=i;
		b1=(c-i*a)/b;
		break;
	}
	if (a0==0) return cout<<0,0;
	for (i=1;i<=c/b;i++)
	if ((c-i*b)%a==0&&c!=i*b) 
	{
		b0=i;
		a1=(c-i*b)/a;
		break;
	}
	if (b0==0) return cout<<0,0;
	cout<<(a1-a0)/(tg/a)+1;
	return 0;
}