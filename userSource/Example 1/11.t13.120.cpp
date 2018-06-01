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

heap_min f;

ll n;
ll a[100005];
ll res;

void xuly()
{
	res=0;
	cin>>n;
	heap_min f;
	ll tmp;
	FOR(i,1,n)
	{
		cin>>tmp;
		f.push(tmp);
	}
	if (n==1){
		return;
	}
	while (!f.empty())
	{
		ll x1=f.top();
		f.pop();
		ll x2=f.top();
		f.pop();
		res+=x1+x2;
//		cout<<x1+x2<<" ";
		if (f.empty()) return;
		f.push(x1+x2);
	}
}

int main()
{
    ios_base::sync_with_stdio(0);
    ll test;
    cin>>test;
    while (test--)
    {
    	xuly();
		cout<<res<<endl;
	}
	return 0;
}