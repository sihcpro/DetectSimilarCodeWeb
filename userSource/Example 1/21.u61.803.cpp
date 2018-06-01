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
ll n,m,a,b;
int main()
{
    ios_base::sync_with_stdio(0);
	cin>>n>>m>>a>>b;
	ll mnrow = (a/m);
	if(a%m)mnrow++;
	ll mxrow = (b/m);
	if(b%m)mxrow++;
	ll res = min(mxrow-mnrow+1,3LL);
	ll startcol = a % m;
	if(startcol == 0)startcol = m;
	ll endcol = b % m;
	if(endcol == 0)endcol = m;
	if(startcol == 1 && (b == n || endcol == m))res = min(res,1LL);
	if(startcol == 1 || startcol == endcol + 1 || (b == n || endcol == m))res = min(res,2LL);
	
	cout<<res;
	
	return 0;
}