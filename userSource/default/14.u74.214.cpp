#include <bits/stdc++.h>

#define ld long double
#define sf scanf
#define pf printf
#define pb push_back
#define mp make_pair
#define PI ( acos(-1.0) )
#define IN freopen("input.txt","r",stdin)
#define OUT freopen("output.txt","w",stdout)
#define FOR(i,a,b) for(int i=a ; i<=b ; i++)
#define FORD(i,a,b) for(int i=a ; i>=b ; i--)
#define INF 1000000000
#define ll long long int
#define eps (1e-8)
#define sq(x) ( (x)*(x) )
#define all(x) x.begin(),x.end()
#define flog2(n) 64 - __builtin_clzll(n) - 1

using namespace std;

typedef pair < int, int > pii;
typedef pair < ll, ll > pll;

vector<ll> f(100005,0),g(100005,0);
ll a[100006];
int n,q;
map<ll,ll> d;

ll st[100005*4] ;
void build (int id, int l, int r){
    if (l==r) {
        st[id]= g[l];
        return ;
    }
    int mid=(l+r)/2;
    build(id*2,l,mid);
    build(id*2+1,mid+1,r);
    st[id]=max(st[id*2],st[id*2+1]);
}

ll get(int id, int l, int r, int u, int v){
    if (v<l || r<u) return 0;
    if (u<=l && r<=v){
        return st[id];
    }
    int mid=(l+r)/2;
    return max(get(id*2,l,mid,u,v),get(id*2+1,mid+1,r,u,v));
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cin>>n>>q;
    FOR (i,1,n){
        cin>>a[i];
    }
    FOR (i,1,n){
        ll k=d[a[i]];
        f[i]=max(k+1,f[i-1]);
        g[i]=i-f[i]+1;
        d[a[i]]=i;
    }
    build(1,1,n);
    FOR (i,1,q){
        int u,v;
        cin>>u>>v;
        u++;v++;
        int k=lower_bound(f.begin()+u, f.begin()+v+1, u)-f.begin();
        if (k==v+1) cout<<v-u+1<<endl;
        else{
            ll res=k-u;
            res=max(res,get(1,1,n,k,v));
            cout<<res<<endl;
        }
    }

         return 0;
}