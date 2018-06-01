100.0% of file 14.u13.404.cpp = 100.0% of file 14.u1.1168.cpp

// ---------- 14.u13.404.cpp
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
/*copied */ const ll maxN = 1e6+5;
/*copied */ const ll inf = 1e10;
/*copied */ const ll mod = 1e9+7;
/*copied */ 
/*copied */ ll n,q;
/*copied */ ll l,r;
/*copied */ ll a[100005];
/*copied */ ll f[100005],g[100005];
/*copied */ map<ll,ll> IT;
/*copied */ 
/*copied */ void build(ll id,ll l,ll r)
/*copied */ {
/*copied */ 	if (l==r)
/*copied */ 	{
/*copied */ 		IT[id]=g[l];
/*copied */ 		return;
/*copied */ 	}
/*copied */ 	ll mid=(l+r)/2;
/*copied */ 	build(id*2,l,mid);
/*copied */ 	build(id*2+1,mid+1,r);
/*copied */ 	IT[id]=max(IT[id*2],IT[id*2+1]);
/*copied */ }
/*copied */ 
/*copied */ ll getIT(ll id,ll l,ll r,ll u,ll v)
/*copied */ {
/*copied */ 	if (v<l||u>r)
/*copied */ 	{
/*copied */ 		return -1e18;
/*copied */ 	}
/*copied */ 	if (l>=u && r<=v)
/*copied */ 	{
/*copied */ 		return IT[id];
/*copied */ 	}
/*copied */ 	ll mid = (l+r)/2;
/*copied */ 	ll x1=getIT(id*2,l,mid,u,v);
/*copied */ 	ll x2=getIT(id*2+1,mid+1,r,u,v);
/*copied */ 	return max(x1,x2);
/*copied */ }
/*copied */ 
/*copied */ void xaydungF()
/*copied */ {
/*copied */ 	ll dau=1;
/*copied */ 	ll cuoi=1;
/*copied */ 	map<ll,ll> check;
/*copied */ 	while (cuoi<=n)
/*copied */ 	{
/*copied */ 		while (check[a[cuoi]])
/*copied */ 		{
/*copied */ 			check[a[dau]]=0;
/*copied */ 			dau++;
/*copied */ 		}
/*copied */ 		check[a[cuoi]]=1;
/*copied */ 		f[cuoi]=dau;
/*copied */ 		cuoi++;
/*copied */ 	}
/*copied */ }
/*copied */ 
/*copied */ ll findK(ll l,ll r,ll u)
/*copied */ {
/*copied */ 	ll res=-1;
/*copied */ 	while (l<=r)
/*copied */ 	{
/*copied */ 		ll mid = (l+r)/2;
/*copied */ 		if (f[mid]>u)
/*copied */ 		{
/*copied */ 			res=mid;
/*copied */ 			r=mid-1;
/*copied */ 		}
/*copied */ 		else
/*copied */ 		{
/*copied */ 			l=mid+1;
/*copied */ 		}
/*copied */ 	}
/*copied */ 	return res;
/*copied */ }
/*copied */ 
/*copied */ int main()
/*copied */ {
/*copied */     ios_base::sync_with_stdio(0);
/*copied */     cin>>n>>q;
/*copied */     FOR(i,1,n)
/*copied */     {
/*copied */     	cin>>a[i];
/*copied */ 	}
/*copied */ 	xaydungF();
/*copied */ 	FOR(i,1,n)
/*copied */ 	{
/*copied */ 		g[i]=i-f[i]+1;
/*copied */ 	}
/*copied */ 	build(1,1,n);
/*copied */ 	
/*copied */ 	while (q--)
/*copied */ 	{
/*copied */ 		cin>>l>>r;
/*copied */ 		l++;
/*copied */ 		r++;
/*copied */ 		ll k=findK(l,r,l);
/*copied */ 		if (k==-1)
/*copied */ 		{
/*copied */ 			cout<<r-l+1<<endl;
/*copied */ 			continue;
/*copied */ 		}
/*copied */ //		cout<<k<<endl;
/*copied */ 		ll res=k-l;
/*copied */ 		ll maxx=getIT(1,1,n,k,r);
/*copied */ //		FOR(i,k,r)
/*copied */ //		{
/*copied */ //			maxx=max(maxx,g[i]);
/*copied */ //		}
/*copied */ 		res=max(res,maxx);
/*copied */ 		cout<<res<<endl;
/*copied */ 	}
/*copied */ 	return 0;
            }
// ---------- end of 14.u13.404.cpp

#########################################################################################
// ---------- 14.u1.1168.cpp
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
/*copied */ const ll maxN = 1e6+5;
/*copied */ const ll inf = 1e10;
/*copied */ const ll mod = 1e9+7;
/*copied */ 
/*copied */ ll n,q;
/*copied */ ll l,r;
/*copied */ ll a[100005];
/*copied */ ll f[100005],g[100005];
/*copied */ map<ll,ll> IT;
/*copied */ 
/*copied */ void build(ll id,ll l,ll r)
/*copied */ {
/*copied */ 	if (l==r)
/*copied */ 	{
/*copied */ 		IT[id]=g[l];
/*copied */ 		return;
/*copied */ 	}
/*copied */ 	ll mid=(l+r)/2;
/*copied */ 	build(id*2,l,mid);
/*copied */ 	build(id*2+1,mid+1,r);
/*copied */ 	IT[id]=max(IT[id*2],IT[id*2+1]);
/*copied */ }
/*copied */ 
/*copied */ ll getIT(ll id,ll l,ll r,ll u,ll v)
/*copied */ {
/*copied */ 	if (v<l||u>r)
/*copied */ 	{
/*copied */ 		return -1e18;
/*copied */ 	}
/*copied */ 	if (l>=u && r<=v)
/*copied */ 	{
/*copied */ 		return IT[id];
/*copied */ 	}
/*copied */ 	ll mid = (l+r)/2;
/*copied */ 	ll x1=getIT(id*2,l,mid,u,v);
/*copied */ 	ll x2=getIT(id*2+1,mid+1,r,u,v);
/*copied */ 	return max(x1,x2);
/*copied */ }
/*copied */ 
/*copied */ void xaydungF()
/*copied */ {
/*copied */ 	ll dau=1;
/*copied */ 	ll cuoi=1;
/*copied */ 	map<ll,ll> check;
/*copied */ 	while (cuoi<=n)
/*copied */ 	{
/*copied */ 		while (check[a[cuoi]])
/*copied */ 		{
/*copied */ 			check[a[dau]]=0;
/*copied */ 			dau++;
/*copied */ 		}
/*copied */ 		check[a[cuoi]]=1;
/*copied */ 		f[cuoi]=dau;
/*copied */ 		cuoi++;
/*copied */ 	}
/*copied */ }
/*copied */ 
/*copied */ ll findK(ll l,ll r,ll u)
/*copied */ {
/*copied */ 	ll res=-1;
/*copied */ 	while (l<=r)
/*copied */ 	{
/*copied */ 		ll mid = (l+r)/2;
/*copied */ 		if (f[mid]>u)
/*copied */ 		{
/*copied */ 			res=mid;
/*copied */ 			r=mid-1;
/*copied */ 		}
/*copied */ 		else
/*copied */ 		{
/*copied */ 			l=mid+1;
/*copied */ 		}
/*copied */ 	}
/*copied */ 	return res;
/*copied */ }
/*copied */ 
/*copied */ int main()
/*copied */ {
/*copied */     ios_base::sync_with_stdio(0);
/*copied */     cin>>n>>q;
/*copied */     FOR(i,1,n)
/*copied */     {
/*copied */     	cin>>a[i];
/*copied */ 	}
/*copied */ 	xaydungF();
/*copied */ 	FOR(i,1,n)
/*copied */ 	{
/*copied */ 		g[i]=i-f[i]+1;
/*copied */ 	}
/*copied */ 	build(1,1,n);
/*copied */ 	
/*copied */ 	while (q--)
/*copied */ 	{
/*copied */ 		cin>>l>>r;
/*copied */ 		l++;
/*copied */ 		r++;
/*copied */ 		ll k=findK(l,r,l);
/*copied */ 		if (k==-1)
/*copied */ 		{
/*copied */ 			cout<<r-l+1<<endl;
/*copied */ 			continue;
/*copied */ 		}
/*copied */ //		cout<<k<<endl;
/*copied */ 		ll res=k-l;
/*copied */ 		ll maxx=getIT(1,1,n,k,r);
/*copied */ //		FOR(i,k,r)
/*copied */ //		{
/*copied */ //			maxx=max(maxx,g[i]);
/*copied */ //		}
/*copied */ 		res=max(res,maxx);
/*copied */ 		cout<<res<<endl;
/*copied */ 	}
/*copied */ 	return 0;
            }
// ---------- end of 14.u1.1168.cpp

