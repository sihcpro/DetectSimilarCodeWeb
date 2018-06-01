#include <bits/stdc++.h>
#define base 1000000007LL
#define ll long long
#define ld double
#define X first
#define Y second
#define pb push_back
#define EPS 1e-9
#define all(a) (a).begin(), (a).end()
#define sz(a) int((a).size())
#define ms(s, n) memset(s, n, sizeof(s))
#define FOR(i,a,b) for (int i = (a); i <= (b); i++)
#define FORE(i,a,b) for (int i = (a); i >= (b); i--)
#define FORALL(it, a) for (__typeof((a).begin()) it = (a).begin(); it != (a).end(); it++)
using namespace std;
typedef pair<ll, ll> II;
typedef pair<II, int> III;

int a[1010][1010], n, m;
bool dd[1010][1010];

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    //freopen("inp.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    cin >> n >> m;
    FOR(i,1,n) FOR(j,1,m) cin >> a[i][j];
    FOR(i,1,n) {
        int Max = 0;
        FOR(j,1,m) Max = max(Max, a[i][j]);
        FOR(j,1,m)
            if (a[i][j] == Max) dd[i][j] = true;
    }
    FOR(j,1,m) {
        int Max = 0;
        FOR(i,1,n) Max = max(Max, a[i][j]);
        FOR(i,1,n)
            if (a[i][j] == Max) dd[i][j] = true;
    }
    ll res = 0;
    FOR(i,1,n)
        FOR(j,1,m)
            if (!dd[i][j]) res += a[i][j];
    cout << res;
    return 0;
}