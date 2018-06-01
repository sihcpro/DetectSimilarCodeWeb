#include <bits/stdc++.h>
#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <set>
#include <cmath>

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
const ll pp = 1e6+5;
const ll inf = 1e10;
const ll mod = 1e9+7;
ll n,q;
ll a[pp];
ll f[pp],g[pp];
map<ll,ll> m;
ll xxx[pp];
ll yyy[pp];

// tim vi tri i dau tien trong [l,r] co f[i] >= x 
ll findFirst(ll x,ll l,ll r)
{
	ll mid = (l+r)>>1;
	ll res = 1;
	while(l <= r)
	{
		mid = (l + r)>>1;
		if(f[mid] >= x)
		{
			res = mid;
			r = mid - 1;
		}
		else l = mid + 1;
	}
	return res;
}
void buildyyy(ll k,ll l,ll r)
{
	if(l == r) 
	{
		yyy[k] = g[l];
		return ;
	}
	ll mid = (l + r)>>1;
	buildyyy(2*k,l,mid);
	buildyyy(2*k+1,mid+1,r);
	yyy[k] = max(yyy[2*k],yyy[2*k+1]);
}
ll getzzzz(ll k,ll l,ll r,ll L,ll R)
{
	if(L > r || R < l)return 0;
	if(l >= L && r <= R)return yyy[k];
	ll mid = (l + r)>>1;
	return max(getzzzz(2*k,l,mid,L,R),getzzzz(2*k+1,mid+1,r,L,R));	
}
void buildxxx(ll k,ll l,ll r)
{
	if(l == r) 
	{
		xxx[k] = f[l];
		return ;
	}
	ll mid = (l + r)>>1;
	buildxxx(2*k,l,mid);
	buildxxx(2*k+1,mid+1,r);
	xxx[k] = max(xxx[2*k],xxx[2*k+1]);
}
ll gettttt(ll k,ll l,ll r,ll L,ll R)
{
	if(L > r || R < l)return 0;
	if(l >= L && r <= R)return xxx[k];
	ll mid = (l + r)>>1;
	return max(gettttt(2*k,l,mid,L,R),gettttt(2*k+1,mid+1,r,L,R));	
}


int main()
{
    ios_base::sync_with_stdio(0);
	cin>>n>>q;
	FOR(i,1,n)
	{
		cin>>a[i];
		f[i] = max(m[a[i]] + 1,f[i-1]);
		g[i] = i - f[i] + 1;
		m[a[i]] = i;
	}
//	FOR(i,1,n)
//	{
//		cout<<f[i]<<" "<<g[i]<<endl;
//	}
	buildxxx(1,1,n);
	buildyyy(1,1,n);
	ll l,r;
	while(q--)
	{
		cin>>l>>r;
		l++;r++;
//		cout<<gettttt(1,1,n,l,r)<<endl;
		if(gettttt(1,1,n,l,r) <= l)
		{
//			cout<<"OK ";
			cout<<r-l + 1<<endl;
			continue;
		}
		ll k = findFirst(l,l,r);
//		cout<<"k = "<<k<<endl;
		cout<<max(k-l,getzzzz(1,1,n,k,r))<<endl;
	}
	return 0;
}