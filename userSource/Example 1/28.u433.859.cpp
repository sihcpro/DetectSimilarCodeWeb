#include <bits/stdc++.h>
using namespace std;

#define mod 1e9+7
#define X first
#define Y second
#define pb push_back
#define mp make_pair
#define FOR(i,a,b) for (int i = (a); i <= (b); i++)
#define FORE(i,a,b) for (int i = (a); i >= (b); i--)

typedef long long ll;
typedef pair<ll,ll> ii;
priority_queue <ll,vector<ll>,greater<ll> > heap_min;

ll n,k,a[100005];
bool cmp(ll a, ll b)
{
    return a > b;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cin >> n;
    FOR(i,1,n)
        cin >> a[i];
    sort(a+1,a+n+1,cmp);
    cout << max(a[1]*a[2],max(a[1]*a[2]*a[3],max(a[n]*a[n-1],a[n]*a[n-1]*a[1])));
    return 0;
}