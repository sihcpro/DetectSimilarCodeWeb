#include<bits/stdc++.h>
#define X first
#define Y second
#define sqr(x) ((x)*(x))
#define pb push_back
#define mk(a,b) make_pair((a),(b))
#define all(a) (a).begin(),(a).end()
using namespace std;

typedef long long ll;
typedef long double ld;
typedef pair<ll, char> II;
typedef pair<II, int> III;

struct HEAP_CMP{ bool operator() (II a, II b) {return (a.X>b.X)||(a.X==b.X && a.Y>b.Y);}};
typedef priority_queue<II, vector<II>, HEAP_CMP> heap;
bool cmp(II a, II b){return a.X<b.X;}
const ll M=2e5+7;
const ll mod=1e9+7;
const ld eps=1e-5;
//const double PI=M_PI;

ll gcd_extend(ll a, ll b, ll *x, ll *y) {
  if (b == 0) {
    *x = 1;
    *y = 0;
    return a;
  }
  ll x1, y1;
  ll gcd = gcd_extend(b, a%b,  &x1, &y1);
  *x = y1;
  *y = x1 - (a / b) * y1;
  return gcd;
}


ll modulo_inverse_euclidean(ll n, ll m) {
  ll x, y;
  if (gcd_extend(n, m, &x, &y) != 1) return -1; // not exist
  return (x % m  + m) % m; // vì x có thể âm
}

ll combination(ll n, ll k, ll m) {
  ll a = 1, b = 1, c=1;
  for (ll i=2; i <= n; i++) {
    a = ((ll)a * i) % m;
  }
  for (ll i=2; i <= n-k; i++) {
    b = ((ll)b * i) % m;
  }
  for (ll i=2; i <= k; i++) {
    c = ((ll)c * i) % m;
  }
  b = ((ll) b * c) % m;
  return ((ll) a * modulo_inverse_euclidean(b, m)) % m;
}

ll n,p;
void solve(){
    while(cin>>n>>p) cout<<combination(n-1, p-1, mod)<<endl;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);

    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    //solve();
    solve();
    return 0;
}