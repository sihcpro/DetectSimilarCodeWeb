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
ll a[10005];

int main()
{
    ios_base::sync_with_stdio(0);
    cin>>n;
    FOR(i,1,n)
    {
    	cin>>a[i];
	}
    sort(a+1,a+1+n);
    ll x1=a[n-1]*a[n];
    ll x2=x1*a[n-2];
    ll x3=a[1]*a[2];
    ll x4=a[1]*a[2]*a[n];
    ll res;
    res=max(x1,x2);
    res=max(res,x3);
    res=max(res,x4);
    cout<<res;
	return 0;
}