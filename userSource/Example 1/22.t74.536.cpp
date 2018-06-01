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

bool comp[10000005];

void sieve(ll n){
    comp[1]=1;
    for (ll i=2; i*i<=n; i++){
        if (comp[i]==0) {
            for (ll j=i; j*i<=n; j++){
                comp[i*j]=1;
            }
        }
    }
}
vector<ll> v;
int main()
{//IN;
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    sieve(10000000);
    ll a,b,k;
    cin>>a>>b>>k;
    FOR (i,a,b){
        if (comp[i]==0) v.pb(i);
    }
    ll res=-2;
    if (v.size()<k) {
        cout<<-1; return 0;
    }
    for (int i=0 ; i+k < v.size() ;i++){
        res=max(res,v[i+k]-v[i]-1);
    }
    res=max(res,v[k-1]-1-a+1);
    res=max(res,b-v[v.size()-k]);
    cout<<res+1<<endl;


         return 0;
}