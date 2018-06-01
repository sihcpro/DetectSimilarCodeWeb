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
char c[5][5];
ll check(ll x,ll y)
{
	ll cnt1 = 0;
	ll cnt2 = 0;
	FOR(i,x,x+1)FOR(j,y,y+1)if(c[i][j] == '#')cnt1++;else cnt2++;
	return cnt1 <=1 || cnt2 <= 1;
}
int main()
{
    ios_base::sync_with_stdio(0);
	FOR(i,1,4)FOR(j,1,4)cin>>c[i][j];
	FOR(i,1,3)FOR(j,1,3)
	{
		if(check(i,j))
		{
			cout<<"YES";
			return 0;
		}
	}
	cout<<"NO";
	return 0;
}