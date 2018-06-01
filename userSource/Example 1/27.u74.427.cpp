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

set<ll> s;
ll C[1005],D[1005],a[1005][1005];
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    ll n,m;
    ll R=0;
    cin>>n>>m;
    FOR (i,1,n){
        FOR (j,1,m){
            cin>>a[i][j];
            R+=a[i][j];
            C[i]=max(C[i],a[i][j]);
            D[j]=max(D[j],a[i][j]);
        }
    }
    FOR (i,1,n){
        s.insert(C[i]);
    }
    FOR (i,1,m) s.insert(D[i]);
    for (auto i: s) R-=i;
    cout<<R<<endl;
         return 0;
}