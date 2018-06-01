100.0% of file 25.u7.829.cpp = 100.0% of file 25.t6.256.cpp

// ---------- 25.u7.829.cpp
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
            
/*copied */ int n, m, c1, c2, a[500010], b[500010];
/*copied */ 
/*copied */ int main()
/*copied */ {
/*copied */     ios::sync_with_stdio(0);
/*copied */     cin.tie(NULL);
/*copied */     //freopen("inp.txt", "r", stdin);
/*copied */     //freopen("out.txt", "w", stdout);
/*copied */     cin >> n >> m;
/*copied */     cin >> c1 >> c2;
/*copied */     int kc = abs(c2-c1);
/*copied */     FOR(i,1,n) cin >> a[i];
/*copied */     FOR(i,1,m) cin >> b[i];
/*copied */     sort(a+1, a+n+1);
/*copied */     sort(b+1, b+m+1);
/*copied */     int res = 2000000000;
/*copied */     int cnt = 0;
/*copied */     FOR(i,1,n) {
/*copied */         int dau = 1, cuoi = m, mid;
/*copied */         while (dau <= cuoi) {
/*copied */             mid = (dau + cuoi) >> 1;
/*copied */             if (b[mid] > a[i]) cuoi = mid-1;
/*copied */             else dau = mid+1;
/*copied */         }
/*copied */         if (cuoi < 1) {
/*copied */             int now = abs(b[1] - a[i]) + kc;
/*copied */             if (now < res) {
/*copied */                 res = now;
/*copied */                 cnt = 1;
/*copied */             }
/*copied */             else if (now == res) cnt++;
/*copied */         }
/*copied */         else if (cuoi == m) {
/*copied */             int now = abs(b[m] - a[i]) + kc;
/*copied */             if (now < res) {
/*copied */                 res = now;
/*copied */                 cnt = 1;
/*copied */             }
/*copied */             else if (now == res) cnt++;
/*copied */         }
/*copied */         else {
/*copied */             int now = abs(b[cuoi] - a[i]) + kc;
/*copied */             if (now < res) {
/*copied */                 res = now;
/*copied */                 cnt = 1;
/*copied */             }
/*copied */             else if (now == res) cnt++;
/*copied */             now = abs(b[cuoi+1] - a[i]) + kc;
/*copied */             if (now < res) {
/*copied */                 res = now;
/*copied */                 cnt = 1;
/*copied */             }
/*copied */             else if (now == res) cnt++;
/*copied */         }
/*copied */     }
/*copied */     cout << res << " " << cnt;
/*copied */     return 0;
            }
// ---------- end of 25.u7.829.cpp

#########################################################################################
// ---------- 25.t6.256.cpp
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
            
/*copied */ int n, m, c1, c2, a[500010], b[500010];
/*copied */ 
/*copied */ int main()
/*copied */ {
/*copied */     ios::sync_with_stdio(0);
/*copied */     cin.tie(NULL);
/*copied */     //freopen("inp.txt", "r", stdin);
/*copied */     //freopen("out.txt", "w", stdout);
/*copied */     cin >> n >> m;
/*copied */     cin >> c1 >> c2;
/*copied */     int kc = abs(c2-c1);
/*copied */     FOR(i,1,n) cin >> a[i];
/*copied */     FOR(i,1,m) cin >> b[i];
/*copied */     sort(a+1, a+n+1);
/*copied */     sort(b+1, b+m+1);
/*copied */     int res = 2000000000;
/*copied */     int cnt = 0;
/*copied */     FOR(i,1,n) {
/*copied */         int dau = 1, cuoi = m, mid;
/*copied */         while (dau <= cuoi) {
/*copied */             mid = (dau + cuoi) >> 1;
/*copied */             if (b[mid] > a[i]) cuoi = mid-1;
/*copied */             else dau = mid+1;
/*copied */         }
/*copied */         if (cuoi < 1) {
/*copied */             int now = abs(b[1] - a[i]) + kc;
/*copied */             if (now < res) {
/*copied */                 res = now;
/*copied */                 cnt = 1;
/*copied */             }
/*copied */             else if (now == res) cnt++;
/*copied */         }
/*copied */         else if (cuoi == m) {
/*copied */             int now = abs(b[m] - a[i]) + kc;
/*copied */             if (now < res) {
/*copied */                 res = now;
/*copied */                 cnt = 1;
/*copied */             }
/*copied */             else if (now == res) cnt++;
/*copied */         }
/*copied */         else {
/*copied */             int now = abs(b[cuoi] - a[i]) + kc;
/*copied */             if (now < res) {
/*copied */                 res = now;
/*copied */                 cnt = 1;
/*copied */             }
/*copied */             else if (now == res) cnt++;
/*copied */             now = abs(b[cuoi+1] - a[i]) + kc;
/*copied */             if (now < res) {
/*copied */                 res = now;
/*copied */                 cnt = 1;
/*copied */             }
/*copied */             else if (now == res) cnt++;
/*copied */         }
/*copied */     }
/*copied */     cout << res << " " << cnt;
/*copied */     return 0;
            }
// ---------- end of 25.t6.256.cpp

