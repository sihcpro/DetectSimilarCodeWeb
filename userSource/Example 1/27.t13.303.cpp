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

ll n,m;
ll a[1001][1001];
ll check[1001][1001];

int main()
{
    ios_base::sync_with_stdio(0);
    cin>>n>>m;
    FOR(i,1,n)
    {
    	FOR(j,1,m)
    	{
    		cin>>a[i][j];
		}
	}
	FOR(i,1,n)
	{
		ll maxx=-1,x,y;
		FOR(j,1,m)
		{
			if (maxx<a[i][j])
			{
				maxx=a[i][j];
				x=i;
				y=j;
			}
		}
//		cout<<x<<" "<<y<<endl;
		check[x][y]=1;
	}
	FOR(j,1,m)
	{
		ll maxx=-1,x,y;
		FOR(i,1,n)
		{
			if (maxx<a[i][j])
			{
				maxx=a[i][j];
				x=i;
				y=j;
			}
		}
//		cout<<x<<" "<<y<<endl;
		check[x][y]=1;
	}
	ll res=0;
	FOR(i,1,n)
	{
		FOR(j,1,m)
		{
			if (check[i][j]==0)
			{
//				cout<<i<<" "<<j<<endl;
				res+=a[i][j];
			}
		}
	}
	cout<<res;
	return 0;
}