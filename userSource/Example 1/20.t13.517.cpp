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
ll a[1005];
ll m=1000003;
int main()
{
    ios_base::sync_with_stdio(0);
    cin>>n;
    a[0]=1;
    a[1]=1;
    FOR(i,2,n) a[i]=(a[i-1]*3)%m;
    cout<<a[n];
	return 0;
}