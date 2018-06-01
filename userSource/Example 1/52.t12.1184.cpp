#include<bits/stdc++.h>

#define mk make_pair
#define pb push_back
#define fi first
#define se second

using namespace std;

typedef long long ll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
const ll MOD = 1e9+7;
const int MAXN = 1e5+7;
ll n;

ll fastPow(ll a, ll k)
{
	ll ret = 1;
	for(;k>0;k>>=1)
	{
		ll b = k&1;
		if(b==1) ret = (ret*a)%MOD;
		a = (a%MOD*a%MOD)%MOD;
	}
	return ret;
}

int main()
{
//	ios::sync_with_stdio(0);
//	cin.tie(NULL);
//	freopen("inp.in", "r", stdin);
	cin >> n;
	cout << fastPow(3,n-1);

}