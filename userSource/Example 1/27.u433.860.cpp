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

bool mt[1005][1005];
long long a[1005][1005];
ll res;

int main()
{
    int n,m;
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cin >> n >> m;
    FOR(i,1,n)
        FOR(j,1,m)
        {
            cin >> a[i][j];
            res += a[i][j];
        }
    int vt,maxn;
    FOR(i,1,n)
    {
        maxn = a[i][1];
        vt = 1;
        FOR(j,2,m)
        {
            if (a[i][j] > maxn)
            {
                maxn = a[i][j];
                vt = j;
            }
        }
        mt[i][vt] = true;
        res -= a[i][vt];
    }

    FOR(j,1,m)
    {
        maxn = a[1][j];
        vt = 1;
        FOR(i,2,n)
        {
            if (a[i][j] > maxn)
            {
                maxn = a[i][j];
                vt = i;
            }
        }
        if (mt[vt][j] == false)
            res -= a[vt][j];
    }
    cout << res;
    return 0;
}