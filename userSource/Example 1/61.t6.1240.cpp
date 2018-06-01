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
typedef pair < ld, ll > DI;

vector<int> v[400005];
int a[100005];
int n,m;
void build (int id, int l, int r){
    if (l==r){
        v[id].pb(a[l]);
        return ;
    }
    else {
        int mid=(l+r)/2;
        build (id*2,l,mid);
        build (id*2+1,mid+1,r);
        merge(all(v[id*2]),all(v[id*2+1]),back_inserter(v[id]));
    }
}

int get(int id, int l, int r, int u, int vv, int k){
    if (vv<l || r<u) return 0;
    if (u<=l && r<=vv) {
        int q=upper_bound(all(v[id]),k)-v[id].begin();
        return q;
    }
    int mid=(l+r)/2;
    return get(id*2,l,mid,u,vv,k)+get(id*2+1,mid+1,r,u,vv,k);
}


int main()
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cin>>n>>m;
    FOR (i,1,n){
        cin>>a[i];
    }
    build (1,1,n);
    FOR (z,1,m){
        ll i,j,k;
        cin>>i>>j>>k;
        ll L=-INF,R=INF;
        while (L<R){
            ll mid=(L+R)/2;
            //cout<<get(1,1,n,i,j,mid)<<" "<<mid<<endl;
            if (get(1,1,n,i,j,mid)<k){
                L=mid+1;
            }
            else{
                R=mid;
            }
        }
        cout<<L<<endl;
    }


         return 0;
}