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

ll n,q,l,r;
ll a[100005];
ll f[100005];
ll g[100005];
map<ll,ll> Tree;

void xaydungF()
{
	map<ll,ll> check;
	ll dau,cuoi;
	dau=cuoi=1;
	while (cuoi<=n)
	{
		while (check[a[cuoi]])
		{
			check[a[dau]]=0;
			dau++;
		}
		f[cuoi]=dau;
		check[a[cuoi]]=1;
		cuoi++;
	}
}

ll findK(ll l,ll r,ll u)
{
	ll res;
	while (l<=r)
	{
		ll mid=(l+r)/2;
		if (f[mid]<=u)
		{
			res=mid;
			l=mid+1;
		}
		else
		{
			r=mid-1;
		}
//		cout<<res;
	}
	return res;
}

void build(ll id,ll l,ll r)
{
	if (l==r)
	{
		Tree[id]=g[l];
		return;
	}
	ll mid=(l+r)/2;
	build(id*2,l,mid);
	build(id*2+1,mid+1,r);
	Tree[id]=max(Tree[id*2],Tree[id*2+1]);
}

ll get(ll id,ll l,ll r,ll u,ll v)
{
	if (r<u || l>v) return -1;
	if (l>=u && r<=v) return Tree[id];
	ll mid=(l+r)/2;
	return max(get(id*2,l,mid,u,v),get(id*2+1,mid+1,r,u,v));
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin>>n>>q;
    FOR(i,1,n)
    {
    	cin>>a[i];
	}
	xaydungF();
	FOR(i,1,n)
	{
		g[i]=i-f[i]+1;
	}
	build(1,1,n);
	while (q--)
	{
		cin>>l>>r;
		l++;
		r++;
		ll k=findK(l,r,l);
//		cout<<k<<endl;
		if (k==r) cout<<r-l+1<<endl;
		else
		{
			ll res=k-l+1;
			res=max(res,get(1,1,n,k+1,r));
			cout<<res<<endl;
		}
	}
	return 0;
}