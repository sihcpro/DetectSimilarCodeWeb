#include<bits/stdc++.h>

#define mk make_pair
#define pb push_back
#define fi first
#define se second

using namespace std;

typedef long long ll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;

ll fastExponen(ll a, ll k, ll MOD) {
	ll res = 1;
	ll t = a;
	while (k) {
		if (k%2==1)	res = (res%MOD*t%MOD)%MOD;
		k >>= 1;
		t = (t%MOD*t%MOD)%MOD;
	}
	return res;
}


ll inverseMod(ll n, ll MOD)
{
	return fastExponen(n, MOD-2, MOD);
}

ll v[100000];

ll combi(ll n, ll k, ll MOD)
{
	for(int i=2; i<=n; i++)
	{
		v[i] = (v[i-1]*i) % MOD;
	}
	ll a = inverseMod(v[k], MOD);
	ll b = inverseMod(v[n-k], MOD);
	ll ret = (v[n]*((a*b) % MOD)) % MOD;;
	return ret; 
}
ll N,P;
int main()
{
//	ios::sync_with_stdio(0);
//	cin.tie(NULL);
//	freopen("inp.in", "r", stdin);
	ll p = 1e9+7;
	v[1] = 1;
	while(~scanf("%I64d %I64d", &N, &P))
	{
		if(P == N)
		{
			printf("1\n");
			continue;
		}
		
		ll ans = combi(N-1, P-1, p);
		printf("%I64d\n", ans) ;			
	}
}