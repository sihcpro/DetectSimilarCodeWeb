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

const ll M = 6;

ll sub(ll x, ll y) {
    return (x-y+base) % base;
}

ll add(ll x, ll y) {
    return (x+y)%base;
}

ll mul(ll x, ll y) {
    return ((x%base) * (y%base)) % base;
}

struct Matrix
{
    ll a[M][M];

    Matrix() {
        FOR(i,0,M-1) fill(a[i], a[i] + M, 0);
    }

    ll* operator[](ll x) {
        return a[x];
    }

    Matrix operator * (Matrix &to) {
        Matrix ans;
        FOR(i,0,M-1)
            FOR(j,0,M-1)
                FOR(k,0,M-1) ans[i][j] = add(ans[i][j], mul(a[i][k], to[k][j]));
        return ans;
    }

    vector<ll> operator * (vector<ll> to) {
        vector<ll> ans(6);
        FOR(i,0,5)
            FOR(j,0,5) ans[i] = add(ans[i], mul(a[i][j], to[j]));
        return ans;
    }
} ONE;

Matrix mu(Matrix A, ll n)
{
    Matrix B = ONE;
    while (n) {
        if (n&1) B = B*A;
        A = A*A;
        n >>= 1;
    }
    return B;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    //freopen("inp.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    FOR(i,0,M-1) ONE[i][i] = 1;
    int n;
    cin >> n;
    Matrix A;
    A[0][2] = A[0][3] = A[1][0] = A[1][4] = A[2][1] = A[2][5] = A[3][0] = A[3][5] = A[4][1] = A[4][3] = A[5][2] = A[5][4] = 1;
    FOR(i,0,5) A[i][i] = 1;
    vector<ll> r(6, 0);
    r[0] = 1;
    A = mu(A, n);
    r = A*r;
    cout << r[0];
    return 0;
}