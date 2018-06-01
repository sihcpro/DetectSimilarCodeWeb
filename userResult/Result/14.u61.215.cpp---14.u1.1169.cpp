100.0% of file 14.u61.215.cpp = 100.0% of file 14.u1.1169.cpp

// ---------- 14.u61.215.cpp
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
/*copied */ ll n,q;
/*copied */ ll a[maxN];
/*copied */ ll f[maxN],g[maxN];
/*copied */ map<ll,ll> m;
/*copied */ ll tf[maxN];
/*copied */ 
/*copied */ void buildtf(ll k,ll l,ll r)
/*copied */ {
/*copied */ 	if(l == r) 
/*copied */ 	{
/*copied */ 		tf[k] = f[l];
/*copied */ 		return ;
/*copied */ 	}
/*copied */ 	ll mid = (l + r)>>1;
/*copied */ 	buildtf(2*k,l,mid);
/*copied */ 	buildtf(2*k+1,mid+1,r);
/*copied */ 	tf[k] = max(tf[2*k],tf[2*k+1]);
/*copied */ }
/*copied */ ll tg[maxN];
/*copied */ 
/*copied */ void buildtg(ll k,ll l,ll r)
/*copied */ {
/*copied */ 	if(l == r) 
/*copied */ 	{
/*copied */ 		tg[k] = g[l];
/*copied */ 		return ;
/*copied */ 	}
/*copied */ 	ll mid = (l + r)>>1;
/*copied */ 	buildtg(2*k,l,mid);
/*copied */ 	buildtg(2*k+1,mid+1,r);
/*copied */ 	tg[k] = max(tg[2*k],tg[2*k+1]);
/*copied */ }
/*copied */ ll getMaxF(ll k,ll l,ll r,ll L,ll R)
/*copied */ {
/*copied */ 	if(L > r || R < l)return 0;
/*copied */ 	if(l >= L && r <= R)return tf[k];
/*copied */ 	ll mid = (l + r)>>1;
/*copied */ 	return max(getMaxF(2*k,l,mid,L,R),getMaxF(2*k+1,mid+1,r,L,R));	
/*copied */ }
/*copied */ ll getMaxG(ll k,ll l,ll r,ll L,ll R)
/*copied */ {
/*copied */ 	if(L > r || R < l)return 0;
/*copied */ 	if(l >= L && r <= R)return tg[k];
/*copied */ 	ll mid = (l + r)>>1;
/*copied */ 	return max(getMaxG(2*k,l,mid,L,R),getMaxG(2*k+1,mid+1,r,L,R));	
/*copied */ }
/*copied */ // tim vi tri i dau tien trong [l,r] co f[i] >= x 
/*copied */ ll findFirst(ll x,ll l,ll r)
/*copied */ {
/*copied */ 	ll mid = (l+r)>>1;
/*copied */ 	ll res = 1;
/*copied */ 	while(l <= r)
/*copied */ 	{
/*copied */ 		mid = (l + r)>>1;
/*copied */ 		if(f[mid] >= x)
/*copied */ 		{
/*copied */ 			res = mid;
/*copied */ 			r = mid - 1;
/*copied */ 		}
/*copied */ 		else l = mid + 1;
/*copied */ 	}
/*copied */ 	return res;
/*copied */ }
/*copied */ int main()
/*copied */ {
/*copied */     ios_base::sync_with_stdio(0);
/*copied */ 	cin>>n>>q;
/*copied */ 	FOR(i,1,n)
/*copied */ 	{
/*copied */ 		cin>>a[i];
/*copied */ 		f[i] = max(m[a[i]] + 1,f[i-1]);
/*copied */ 		g[i] = i - f[i] + 1;
/*copied */ 		m[a[i]] = i;
/*copied */ 	}
/*copied */ //	FOR(i,1,n)
/*copied */ //	{
/*copied */ //		cout<<f[i]<<" "<<g[i]<<endl;
/*copied */ //	}
/*copied */ 	buildtf(1,1,n);
/*copied */ 	buildtg(1,1,n);
/*copied */ 	ll l,r;
/*copied */ 	while(q--)
/*copied */ 	{
/*copied */ 		cin>>l>>r;
/*copied */ 		l++;r++;
/*copied */ //		cout<<getMaxF(1,1,n,l,r)<<endl;
/*copied */ 		if(getMaxF(1,1,n,l,r) <= l)
/*copied */ 		{
/*copied */ //			cout<<"OK ";
/*copied */ 			cout<<r-l + 1<<endl;
/*copied */ 			continue;
/*copied */ 		}
/*copied */ 		ll k = findFirst(l,l,r);
/*copied */ //		cout<<"k = "<<k<<endl;
/*copied */ 		cout<<max(k-l,getMaxG(1,1,n,k,r))<<endl;
/*copied */ 	}
/*copied */ 	return 0;
            }
// ---------- end of 14.u61.215.cpp

#########################################################################################
// ---------- 14.u1.1169.cpp
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
/*copied */ ll n,q;
/*copied */ ll a[maxN];
/*copied */ ll f[maxN],g[maxN];
/*copied */ map<ll,ll> m;
/*copied */ ll tf[maxN];
/*copied */ 
/*copied */ void buildtf(ll k,ll l,ll r)
/*copied */ {
/*copied */ 	if(l == r) 
/*copied */ 	{
/*copied */ 		tf[k] = f[l];
/*copied */ 		return ;
/*copied */ 	}
/*copied */ 	ll mid = (l + r)>>1;
/*copied */ 	buildtf(2*k,l,mid);
/*copied */ 	buildtf(2*k+1,mid+1,r);
/*copied */ 	tf[k] = max(tf[2*k],tf[2*k+1]);
/*copied */ }
/*copied */ ll tg[maxN];
/*copied */ 
/*copied */ void buildtg(ll k,ll l,ll r)
/*copied */ {
/*copied */ 	if(l == r) 
/*copied */ 	{
/*copied */ 		tg[k] = g[l];
/*copied */ 		return ;
/*copied */ 	}
/*copied */ 	ll mid = (l + r)>>1;
/*copied */ 	buildtg(2*k,l,mid);
/*copied */ 	buildtg(2*k+1,mid+1,r);
/*copied */ 	tg[k] = max(tg[2*k],tg[2*k+1]);
/*copied */ }
/*copied */ ll getMaxF(ll k,ll l,ll r,ll L,ll R)
/*copied */ {
/*copied */ 	if(L > r || R < l)return 0;
/*copied */ 	if(l >= L && r <= R)return tf[k];
/*copied */ 	ll mid = (l + r)>>1;
/*copied */ 	return max(getMaxF(2*k,l,mid,L,R),getMaxF(2*k+1,mid+1,r,L,R));	
/*copied */ }
/*copied */ ll getMaxG(ll k,ll l,ll r,ll L,ll R)
/*copied */ {
/*copied */ 	if(L > r || R < l)return 0;
/*copied */ 	if(l >= L && r <= R)return tg[k];
/*copied */ 	ll mid = (l + r)>>1;
/*copied */ 	return max(getMaxG(2*k,l,mid,L,R),getMaxG(2*k+1,mid+1,r,L,R));	
/*copied */ }
/*copied */ // tim vi tri i dau tien trong [l,r] co f[i] >= x 
/*copied */ ll findFirst(ll x,ll l,ll r)
/*copied */ {
/*copied */ 	ll mid = (l+r)>>1;
/*copied */ 	ll res = 1;
/*copied */ 	while(l <= r)
/*copied */ 	{
/*copied */ 		mid = (l + r)>>1;
/*copied */ 		if(f[mid] >= x)
/*copied */ 		{
/*copied */ 			res = mid;
/*copied */ 			r = mid - 1;
/*copied */ 		}
/*copied */ 		else l = mid + 1;
/*copied */ 	}
/*copied */ 	return res;
/*copied */ }
/*copied */ int main()
/*copied */ {
/*copied */     ios_base::sync_with_stdio(0);
/*copied */ 	cin>>n>>q;
/*copied */ 	FOR(i,1,n)
/*copied */ 	{
/*copied */ 		cin>>a[i];
/*copied */ 		f[i] = max(m[a[i]] + 1,f[i-1]);
/*copied */ 		g[i] = i - f[i] + 1;
/*copied */ 		m[a[i]] = i;
/*copied */ 	}
/*copied */ //	FOR(i,1,n)
/*copied */ //	{
/*copied */ //		cout<<f[i]<<" "<<g[i]<<endl;
/*copied */ //	}
/*copied */ 	buildtf(1,1,n);
/*copied */ 	buildtg(1,1,n);
/*copied */ 	ll l,r;
/*copied */ 	while(q--)
/*copied */ 	{
/*copied */ 		cin>>l>>r;
/*copied */ 		l++;r++;
/*copied */ //		cout<<getMaxF(1,1,n,l,r)<<endl;
/*copied */ 		if(getMaxF(1,1,n,l,r) <= l)
/*copied */ 		{
/*copied */ //			cout<<"OK ";
/*copied */ 			cout<<r-l + 1<<endl;
/*copied */ 			continue;
/*copied */ 		}
/*copied */ 		ll k = findFirst(l,l,r);
/*copied */ //		cout<<"k = "<<k<<endl;
/*copied */ 		cout<<max(k-l,getMaxG(1,1,n,k,r))<<endl;
/*copied */ 	}
/*copied */ 	return 0;
            }
// ---------- end of 14.u1.1169.cpp

