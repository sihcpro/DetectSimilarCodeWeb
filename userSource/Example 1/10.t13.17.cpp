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
ll a[100005];


int main()
{
    ios_base::sync_with_stdio(0);
    cin>>n;
    FOR(i,1,n) cin>>a[i];
	if (n==1)
	{
		cout<<a[1]%3;
		return 0;
	}
	if (a[1]%3==0)
	{
		cout<<0;
		return 0;
	}    
	if (a[1]%3==1)
	{
		cout<<1;
		return 0;
	}
	if (a[1]%3==2)
	{
		if (a[2]%2==1)
		{
			cout<<2;
			return 0;
		}
		else
		{
			cout<<1;
			return 0;
		}
	}
	return 0; 
}