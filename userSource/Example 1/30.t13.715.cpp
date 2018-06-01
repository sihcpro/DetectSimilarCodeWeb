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
ll l,r;

ll cal(ll k)
{
	return (k*k*k+6*k*k+5*k-6)/6;
}

int main()
{
    ios_base::sync_with_stdio(0);
//    cout<<cal(1817118);
    r=1;
    while (cal(r)<=1e18)
    {
    	r++;
	}
	r--;
	r=4000000;
	l=0;
    cin>>n;
    ll res=0;
    while (l<=r)
    {
    	ll mid=(l+r)/2;
//    	cout<<cal(mid)<<endl;
    	if (cal(mid)<=n)
    	{
    		res=mid;
    		l=mid+1;
		}
		else
		{
			r=mid-1;
		}
	}
//	cout<<cal(res)<<endl;
	cout<<res;
	return 0;
}