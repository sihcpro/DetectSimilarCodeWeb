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
ll n,q;
ll a[maxN];
ll f[maxN],g[maxN];
map<ll,ll> m;
ll tf[maxN];

void buildtf(ll k,ll l,ll r)
{
	if(l == r) 
	{
		tf[k] = f[l];
		return ;
	}
	ll mid = (l + r)>>1;
	buildtf(2*k,l,mid);
	buildtf(2*k+1,mid+1,r);
	tf[k] = max(tf[2*k],tf[2*k+1]);
}
ll tg[maxN];

void buildtg(ll k,ll l,ll r)
{
	if(l == r) 
	{
		tg[k] = g[l];
		return ;
	}
	ll mid = (l + r)>>1;
	buildtg(2*k,l,mid);
	buildtg(2*k+1,mid+1,r);
	tg[k] = max(tg[2*k],tg[2*k+1]);
}
ll getMaxF(ll k,ll l,ll r,ll L,ll R)
{
	if(L > r || R < l)return 0;
	if(l >= L && r <= R)return tf[k];
	ll mid = (l + r)>>1;
	return max(getMaxF(2*k,l,mid,L,R),getMaxF(2*k+1,mid+1,r,L,R));	
}
ll getMaxG(ll k,ll l,ll r,ll L,ll R)
{
	if(L > r || R < l)return 0;
	if(l >= L && r <= R)return tg[k];
	ll mid = (l + r)>>1;
	return max(getMaxG(2*k,l,mid,L,R),getMaxG(2*k+1,mid+1,r,L,R));	
}
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
	buildtf(1,1,n);
	buildtg(1,1,n);
	ll l,r;
	while(q--)
	{
		cin>>l>>r;
		l++;r++;
//		cout<<getMaxF(1,1,n,l,r)<<endl;
		if(getMaxF(1,1,n,l,r) <= l)
		{
//			cout<<"OK ";
			cout<<r-l + 1<<endl;
			continue;
		}
		ll k = findFirst(l,l,r);
//		cout<<"k = "<<k<<endl;
		cout<<max(k-l,getMaxG(1,1,n,k,r))<<endl;
	}
	return 0;
}