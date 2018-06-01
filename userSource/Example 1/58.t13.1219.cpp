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

ll n,k;
ll a[100005];
map<ll,ll> t;

void build (ll id,ll l,ll r)
{
	if (l==r)
	{
		t[id]=a[l];
		return;
	}
	ll mid=(l+r)/2;
	build(id*2,l,mid);
	build(id*2+1,mid+1,r);
	t[id]=min(t[id*2],t[id*2+1]);
}

ll get(ll id,ll l,ll r,ll u,ll v)
{
	if (r<u || l>v)
	{
		return 1e18;
	}
	if (l>=u && r<=v)
	{
		return t[id];
	}
	ll mid=(l+r)/2;
	return min(get(id*2,l,mid,u,v), get(id*2+1,mid+1,r,u,v));
}

void update(ll id,ll l,ll r,ll vt,ll val)
{
	if (vt>r || vt<l)
	{
		return;
	}
	if (l==r)
	{
		t[id]=val;
		return;
	}
	ll mid=(l+r)/2;
	update(id*2,l,mid,vt,val);
	update(id*2+1,mid+1,r,vt,val);
	t[id]=min(t[id*2],t[id*2+1]);
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin>>n>>k;
    FOR(i,1,n)
    {
    	cin>>a[i];
	}
	build(1,1,n);
	ll u,v,tmp;
	while(k--)
	{
		cin>>tmp>>u>>v;
		if (tmp==1)
		cout<<get(1,1,n,u,v)<<endl;
		else
		{
			update(1,1,n,u,v);
		}	
	}
	return 0;
}