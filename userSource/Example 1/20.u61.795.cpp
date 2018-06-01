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
const ll mod = 1e6+3;
ll n;
ll LT(ll n,ll k)
{
	if(k == 0)return 1;
	if(k == 1)return n % mod;
	ll res = LT(n,k/2);
	if(k%2)return (((res*res)%mod)*n)%mod;
	return (res*res)%mod;
}
int main()
{
    ios_base::sync_with_stdio(0);
	cin>>n;
	if(n == 0)
	{
		cout<<1;
		return 0;
	}
	cout<<LT(3,n-1);
	return 0;
}