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
ll n;
ll check(ll k)
{
	ll sum = 0;
	FOR(i,1,k)
	{
		sum += i*(k-i+1);
	}
	sum += ((k+1)*k)/2 - 1;
	return sum <= n;
}
int main()
{
    ios_base::sync_with_stdio(0);
	cin>>n;
	ll l = 1;
	ll r = 1e7;
	ll mid = (l+r)>>1;
	ll res = 0;
	while(l <= r)
	{
		mid = (l+r)>>1;
		if(check(mid))
		{
			res = mid;
			l = mid + 1;
		}
		else r = mid - 1;
	}
	cout<<res;
	return 0;
}