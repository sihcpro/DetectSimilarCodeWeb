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

bool comp[300000005];

vector<ll> v;

void sieve(ll n){
    comp[1]=1;
    for (int i=2; i*i<=n; i++){
        if (comp[i]==0){
            //if (i%4==1) v.pb(i);
            for (int j=i; j*i<=n; j++){
                comp[i*j]=1;
            }
        }
    }
}

int main()
{//IN;
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    ll l,r;
    cin>>l>>r;
    sieve(r);
    int L=(l/4)*4-3;
    int R=(r/4)*4+5;
    ll res=0;
    for  (int i=L; i<=R; i+=4 ) if (comp[i]==0 && i>=l && i<=r) {
        res++;
    }
    if (l<=2 && r>=2) res++;
    cout<<res<<endl;
         return 0;
}