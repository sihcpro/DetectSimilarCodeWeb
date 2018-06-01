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
ll TIME;
vector<DI> v;
ll a[100005];
ll fen[100005];
int n;

void add(int p, int val){
    for (int i=p; i<=n;i+=i&-i){
        fen[i]+=val;
    }
}
ll sum (int p){
    ll res=0;
    for (int i=p; i; i-=i&-i){
        res+=fen[i];
    }
    return res;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cin>>n;
    FOR (i,1,n){
        ld x;
        cin>>x;
        v.pb(DI(x,i));
    }
    sort(all(v));

    for (int i=0; i<v.size();i++){
        if (i==0 || v[i].first!=v[i-1].first){
            a[v[i].second]=++TIME;
        }
        else {
            a[v[i].second]=TIME;
        }
    }
    //FOR (i,1,n) cout<<a[i]<<" ";
    ll res=0;
    FORD(i,n,1){
        add(a[i],1);
        res+=sum(a[i]-1);
    }
    cout<<res<<endl;

         return 0;
}