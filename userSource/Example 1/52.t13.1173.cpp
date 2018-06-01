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

ll n;

ll lt(ll a,ll b)
{
	if (b==1) return a%mod;
	else
	{
		ll tmp=lt(a,b/2);
		tmp=(tmp*tmp)%mod;
		if (b%2==1) tmp=(tmp*a)%mod;
		return tmp%mod;
	}
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin>>n;
    cout<<lt(3,n-1);
	return 0;
}