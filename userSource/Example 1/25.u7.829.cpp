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

int n, m, c1, c2, a[500010], b[500010];

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    //freopen("inp.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    cin >> n >> m;
    cin >> c1 >> c2;
    int kc = abs(c2-c1);
    FOR(i,1,n) cin >> a[i];
    FOR(i,1,m) cin >> b[i];
    sort(a+1, a+n+1);
    sort(b+1, b+m+1);
    int res = 2000000000;
    int cnt = 0;
    FOR(i,1,n) {
        int dau = 1, cuoi = m, mid;
        while (dau <= cuoi) {
            mid = (dau + cuoi) >> 1;
            if (b[mid] > a[i]) cuoi = mid-1;
            else dau = mid+1;
        }
        if (cuoi < 1) {
            int now = abs(b[1] - a[i]) + kc;
            if (now < res) {
                res = now;
                cnt = 1;
            }
            else if (now == res) cnt++;
        }
        else if (cuoi == m) {
            int now = abs(b[m] - a[i]) + kc;
            if (now < res) {
                res = now;
                cnt = 1;
            }
            else if (now == res) cnt++;
        }
        else {
            int now = abs(b[cuoi] - a[i]) + kc;
            if (now < res) {
                res = now;
                cnt = 1;
            }
            else if (now == res) cnt++;
            now = abs(b[cuoi+1] - a[i]) + kc;
            if (now < res) {
                res = now;
                cnt = 1;
            }
            else if (now == res) cnt++;
        }
    }
    cout << res << " " << cnt;
    return 0;
}