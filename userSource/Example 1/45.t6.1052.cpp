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
typedef pair<ld, ld> II;
typedef pair<II, int> III;

int n;
ll m;
ll dp[2010][2010];
char res[2010];

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    //freopen("inp.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    cin >> n >> m;

    dp[n][0] = 1;
    FORE(i,n-1,0)
        FOR(j,0,n/2) {
            if (dp[i+1][j+1] == -1) dp[i][j] = -1;
            else dp[i][j] = dp[i+1][j+1];
            if (j > 0) {
                if (dp[i][j] == -1) continue;
                if (dp[i+1][j-1] == -1) dp[i][j] = -1;
                else if (dp[i][j] + dp[i+1][j-1] > m) dp[i][j] = -1;
                else dp[i][j] = dp[i][j] + dp[i+1][j-1];
            }
        }
    res[1] = '(';
    int now = 1;
    FOR(i,2,n) {
        if (dp[i][now+1] == -1 || dp[i][now+1] >= m) {
            res[i] = '(';
            now++;
        }
        else {
            res[i] = ')';
            m -= dp[i][now+1];
            now--;
        }
    }
    FOR(i,1,n) cout << res[i];
    return 0;
}