#include <bits/stdc++.h>
using namespace std;
int main()
{
	long m,n,a,b;
	ios::sync_with_stdio(0);
	cin.tie(NULL);
	cin>>n>>m>>a>>b;
	if (m==1) return cout<<1,0;
	if (a==1&&b==n||a==b) return cout<<1,0;
	if (a%m==1&&(b==n||b%m==0)) return cout<<1,0;
	if (a%m!=0&&a/m==b/m) return cout<<1,0;
	if (a%m!=0&&b%m==0&&a/m+1==b/m) return cout<<1,0;
	if (a%m-b%m==1) return cout<<2,0;
	if (a%m!=1&&(b==n||b%m==0)) return cout<<2,0;
	if (a%m!=0&&a/m+1==b/m) return cout<<2,0;
	if (a%m==0&&a/m==b/m) return cout<<2,0;
	if (a%m==1&&b<n) return cout<<2,0;
	if (a%m==0&&b%m==m-1) return cout<<2,0;
	return cout<<3,0;
}