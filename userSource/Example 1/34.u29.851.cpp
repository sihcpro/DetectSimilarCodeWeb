#include <bits/stdc++.h>
using namespace std;
int d[3][100005];
long long kq;
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(NULL);
	int i,j,n,t;
	string s;
	cin>>s;
	n=s.length();
	for (i=1;i<=n;i++)
	{
		t=s[i-1]-'0';
		if (t==0) kq++;
			else d[t%3][i]=1;
		if (t%3==0) 
		{
			d[0][i]+=d[0][i-1];
			d[1][i]+=d[1][i-1];
			d[2][i]+=d[2][i-1];
		}
		if (t%3==1) 
		{
			d[0][i]+=d[2][i-1];
			d[1][i]+=d[0][i-1];
			d[2][i]+=d[1][i-1];
		}
		if (t%3==2) 
		{
			d[0][i]+=d[1][i-1];
			d[1][i]+=d[2][i-1];
			d[2][i]+=d[0][i-1];
		}
		if (t%2==0) kq+=d[0][i];
	}
	cout<<kq;
	return 0;
}