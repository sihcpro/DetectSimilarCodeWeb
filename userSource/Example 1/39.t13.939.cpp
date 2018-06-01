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
ll a[100];

int main()
{
    ios_base::sync_with_stdio(0);
    cin>>n;
    FOR(i,1,n) cin>>a[i];
    ll res=0;
    FOR(i,1,n)
    {
    	ll tmp=1;
    	FOR(j,1,a[i]%10)
    	{
    		tmp=tmp*(a[i]/10);
		}
		res+=tmp;
	}
	cout<<res;
	return 0;
}