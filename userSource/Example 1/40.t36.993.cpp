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
typedef pair<int, int> II;
typedef pair<II, int> III;

struct HEAP_CMP{ bool operator() (II a, II b) {return a.X<b.X;}};
typedef priority_queue<II, vector<II>, HEAP_CMP> heap;
bool cmp(II a, II b){return a.Y>b.Y;}
const ll M=1e4+7;
const ll mod=1e9+7;
const ld esp=1e-5;

map<II, ll> mp;
map<II, ll> :: iterator it;
ll n,a,b,c,ans,m;

ll _gcd(ll a, ll b){
    if(b==0) return a;
    return _gcd(b, a%b);
}

ll c2(ll n){
    return (n-1)*n/2%mod;
}

ll c3(ll n){
    return n*(n-1)*(n-2)/6%mod;
}

void solve(){
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a>>b>>c;
        ll x= _gcd(a,b);
        mp[II(a/x, b/x)]++;
    }

    ans = c3(n);
    for(it=mp.begin(); it!=mp.end(); it++){
        m = (*it).Y;
        ans = (ans - (c3(m)+c2(m)*(n-m))%mod + mod)%mod;
    }

    cout<<ans;
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