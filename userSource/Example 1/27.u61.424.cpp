#include<iostream>
using namespace std;
typedef long long ll;
#define FOR(i,a,b) for(ll i=a;i<=b;i++)
ll n,m,a[1005][1005],r[1005],c[1005];
int main()
{
	cin>>n>>m;
	FOR(i,1,n)FOR(j,1,m)cin>>a[i][j];
	FOR(i,1,n)FOR(j,1,m)r[i] = max(r[i],a[i][j]);
	FOR(j,1,m)FOR(i,1,n)c[j] = max(c[j],a[i][j]);
	ll res = 0;
	FOR(i,1,n)FOR(j,1,m)if(a[i][j] < min(r[i],c[j]))res+=a[i][j];
	cout<<res;
	return 0;
}