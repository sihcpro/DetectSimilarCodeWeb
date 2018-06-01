#include<bits/stdc++.h>
#define fi first
#define se second
#define sqr(x) ((x)*(x))
#define pb push_back
#define is insert
#define ll long long
#define mk(a,b) make_pair((a),(b))
#define all(a) (a).begin(),(a).end()
#define foru(i,b,e) for(ll i=b; i<=e; ++i)
#define ford(i,e,b) for(ll i=e; i>=b; --i)
#define pr(a,c) for(auto i: a) cout<<i<<c;
using namespace std;

typedef long double ld;
typedef pair<ll, ll> II;
typedef pair<II, ll> III;

struct HEAP_CMP{ bool operator() (II a, II b) {return 0;}};
typedef priority_queue<II, vector<II>, HEAP_CMP> heap;
bool cmp(II a, II b){return a.fi<b.fi;}
const ll M=1e5+7;
const ll MOD=1e9+7;
const ll INF = 1e16+7;
const ld eps=1e-5;

int n;
ll tree[5*M], a[M];

void build(int l, int r, int id){
    if(l==r){
        tree[id]=a[l];
        return;
    }

    int mid = (l+r)/2;

    build(l, mid, id*2);
    build(mid+1, r, id*2+1);

    tree[id] = min(tree[id*2], tree[id*2+1]);
}

ll query(int l, int r, int u, int v, int id){
    if(u>r||v<l) return INF;

    if(l>=u&&r<=v) return tree[id];

    int mid = (l+r)/2;

    return min(query(l, mid, u, v, id*2), query(mid+1, r, u, v, id*2+1));
}

int q, l,r;
void solve(){
    cin>>n>>q;
    foru(i,1,n) cin>>a[i];
    build(1,n,1);
    while(q--){
        cin>>l>>r;
        cout<<query(1,n,l,r,1)<<endl;
    }
}


int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);
   // freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    //int t;
    //cin>>t;
    //while(t--)
    solve();
    return 0;
}