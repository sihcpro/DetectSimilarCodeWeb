#include <bits/stdc++.h>
using namespace std;
short a[5],d=0;
long s,n;
set <long> kq;
void dq(short i)
{
	if (i<=d)
	{
		for (int j=1;j<=2;j++)
		{
			s=s*10+a[j];
			if (s<=n) kq.insert(s);
			dq(i+1);
			s=s/10;
		}
	}
}
int main()
{

	short i,j;
	long m;
	ios::sync_with_stdio(0);
	cin.tie(NULL);
	cin>>n;
	m=n;
	while(m)
	{
		d++;
		m=m/10;
	}
	for (i=0;i<9;i++)
		for (j=i+1;j<=9;j++)
		{
			a[1]=i;
			a[2]=j;
			s=0;
			dq(1);
		}
	cout<<kq.size()-1;
	return 0;
}

