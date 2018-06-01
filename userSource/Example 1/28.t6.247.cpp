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

vector<int> a, b;
int n;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    //freopen("inp.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    cin >> n;
    FOR(i,1,n) {
        int x;
        cin >> x;
        if (x < 0) a.pb(x);
        else b.pb(x);
    }
    sort(all(a));
    sort(all(b));
    int res = -2000000000;
    if (sz(a) >= 2) {
        res = max(res, a[0] * a[1]);
        if (sz(b) >= 1) res = max(res, a[0] * a[1] * b[sz(b)-1]);
    }
    if (sz(b) >= 2) res = max(res, b[sz(b)-1] * b[sz(b)-2]);
    if (sz(b) >= 3) res = max(res, b[sz(b)-1] * b[sz(b)-2] * b[sz(b)-3]);
    cout << res;
    return 0;
}