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
const ll maxN = 300005;
const ll inf = 1e10;
const ll mod = 1e9+7;

struct data
{
	ll a,b,c;
	bool operator < (const data &o)const
	{
		if (a==o.a) return b<o.b;
		else return a<o.a;
	}
};

data dt[maxN];
ll n;
ll f[maxN],fNum=0;
ll dp[maxN],dp2[maxN],res=0;


int main()
{
    ios_base::sync_with_stdio(0);
    cin>>n;
    FOR(i,1,n) cin>>dt[i].a>>dt[i].b>>dt[i].c;
    FOR(i,1,n)
    {
    	if (dt[i].a<0)
    	{
    		dt[i].a*=-1;
    		dt[i].b*=-1;
		}
		ll tmp=__gcd(dt[i].a,dt[i].b);
		dt[i].a/=tmp;
		dt[i].b/=tmp;
	}
	sort(dt+1,dt+1+n);
	fNum=1;
	f[fNum]=1;
	FOR(i,2,n)
	{
		if (dt[i].a==dt[i-1].a && dt[i].b==dt[i-1].b)
		{
			f[fNum]++;
		}
		else
		{
			fNum++;
			f[fNum]=1;
		}
	}
//	FOR(i,1,fNum) cout<<f[i]<<" ";
	FOD(i,fNum,1)
	{
		dp[i]=(dp[i+1]+f[i])%mod;
//		cout<<dp[i]<<" ";
	}
	FOD(i,fNum-1,1)
	{
		dp2[i]=(dp2[i+1]+dp[i+1]*f[i])%mod;
//		cout<<dp2[i]<<" ";
	}
	FOR(i,1,fNum-2)
	{
		res=(res+f[i]*dp2[i+1])%mod;
	}
	cout<<res;
	return 0;
}