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

struct data {
    ll p, w;
} a[10010];

bool operator< (data a, data b)
{
    return a.p < b.p;
}

ll dp[10010], z[10010];
int n;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    //freopen("inp.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    cin >> n;
    FOR(i,1,n) cin >> a[i].p;
    FOR(i,1,n) cin >> a[i].w;
    sort(a+1, a+n+1);
    dp[0] = -1000000000000LL;
    dp[1] = a[1].p;
    FOR(i,2,n) {
        FOR(j,0,i) z[j] = 1000000000000000000LL;
        FOR(j,0,i-1)
            if (dp[j] != -1000000000000000000LL) {
                if (dp[j] + a[i].w < a[i].p) {
                    z[j] = min(z[j], dp[j] + a[i].w);
                    z[j+1] = min(z[j+1], a[i].p);
                }
                else if (dp[j] > a[i].p) {
                    z[j] = min(z[j], dp[j] + a[i].w);
                }
                else {
                    z[j+1] = min(z[j+1], dp[j] + a[i].w);
                }
            }
        FOR(j,0,i)
            if (z[j] != 1000000000000000000LL) dp[j] = z[j];
            else dp[j] = -z[j];
    }
    FORE(i,n,0)
        if (dp[i] != -1000000000000000000LL) {
            cout << n-i;
            break;
        }
    //FOR(i,0,n) cout << " - " << dp[i] << endl;
    return 0;
}