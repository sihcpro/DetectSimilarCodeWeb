#include<bits/stdc++.h>

#define X  first
#define Y  second
typedef long long ll;

#define FOR(i,a,b) for(ll i = a;i<=b;i++)
#define FOD(i,a,b) for(ll i = a;i>=b;i--)
#define pb push_back
#define mp make_pair

using namespace std;

typedef pair<ll,ll>ii;
typedef priority_queue<ll,vector<ll>,greater<ll> > heap_min;
const ll maxN = 1e6+5;
const ll inf = 1e10;
const ll mod = 1e9+7;
ii a[4];
ll check(ii a,ii b,ii c)
{
	ll A = b.Y - a.Y;
	ll B = b.X - a.X;
	return (A*(c.X - a.X) - B*(c.Y-a.Y));
}
int main()
{
    ios_base::sync_with_stdio(0);
	FOR(i,1,3)cin>>a[i].X>>a[i].Y;
	ll tmp = check(a[1],a[2],a[3]);
	if(tmp == 0)
	{
		cout<<"TOWARDS";
		return 0;
	}
	if(tmp < 0)
	{
		cout<<"LEFT";
		return 0;
	}
	cout<<"RIGHT";
	return 0;
}