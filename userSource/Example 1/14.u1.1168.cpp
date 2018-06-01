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
ll l,r;
ll a[100005];
ll f[100005],g[100005];
map<ll,ll> IT;

void build(ll id,ll l,ll r)
{
	if (l==r)
	{
		IT[id]=g[l];
		return;
	}
	ll mid=(l+r)/2;
	build(id*2,l,mid);
	build(id*2+1,mid+1,r);
	IT[id]=max(IT[id*2],IT[id*2+1]);
}

ll getIT(ll id,ll l,ll r,ll u,ll v)
{
	if (v<l||u>r)
	{
		return -1e18;
	}
	if (l>=u && r<=v)
	{
		return IT[id];
	}
	ll mid = (l+r)/2;
	ll x1=getIT(id*2,l,mid,u,v);
	ll x2=getIT(id*2+1,mid+1,r,u,v);
	return max(x1,x2);
}

void xaydungF()
{
	ll dau=1;
	ll cuoi=1;
	map<ll,ll> check;
	while (cuoi<=n)
	{
		while (check[a[cuoi]])
		{
			check[a[dau]]=0;
			dau++;
		}
		check[a[cuoi]]=1;
		f[cuoi]=dau;
		cuoi++;
	}
}

ll findK(ll l,ll r,ll u)
{
	ll res=-1;
	while (l<=r)
	{
		ll mid = (l+r)/2;
		if (f[mid]>u)
		{
			res=mid;
			r=mid-1;
		}
		else
		{
			l=mid+1;
		}
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
		if (k==-1)
		{
			cout<<r-l+1<<endl;
			continue;
		}
//		cout<<k<<endl;
		ll res=k-l;
		ll maxx=getIT(1,1,n,k,r);
//		FOR(i,k,r)
//		{
//			maxx=max(maxx,g[i]);
//		}
		res=max(res,maxx);
		cout<<res<<endl;
	}
	return 0;
}