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
ll n,m,a,b;
ll xa,ya,xb,yb;

int main()
{
    ios_base::sync_with_stdio(0);
    cin>>n>>m>>a>>b;
    xa=a/m + 1;
    if (a%m==0) xa--;
    xb=b/m + 1;
    if (b%m==0) xb--;
    
    ya=a%m;
    if (ya==0) ya=m;
    yb=b%m;
    if (yb==0) yb=m;
//    cout<<ya<<yb;
    if (xa==xb||(ya==1&&yb==m))
    {
    	cout<<1;
    	return 0;
	}
	if (ya==1&&b==n)
	{
		cout<<1;
    	return 0;
	}
	if (ya==1||yb==m||b==n)
	{
		cout<<2;
		return 0;
	}
	if (xb-xa==1)
	{
		cout<<2;
		return 0;
	}
	if (ya==yb+1)
	{
		cout<<2;
		return 0;
	}
	cout<<3;
	return 0;
}