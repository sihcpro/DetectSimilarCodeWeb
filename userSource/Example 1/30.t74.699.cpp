#include <bits/stdc++.h>

#define ld long double
#define sf scanf
#define pf printf
#define pb push_back
#define mp make_pair
#define PI ( acos(-1.0) )
#define IN freopen("input.txt","r",stdin)
#define OUT freopen("output.txt","w",stdout)
#define FOR(i,a,b) for(ll i=a ; i<=b ; i++)
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

ll calc(ll n){
    return n*(n+1)*(n+2)/6+n*(n+1)/2-1;
}
int main()
{//IN;
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    ll N=1e18;
    ll L=0,R=1817119;
    ll n;
    cin>>n;
    while (L<R){
        ll mid=(L+R+1)/2;
        if (calc(mid)>n) R=mid-1;
        else L=mid;
    }
    cout<<L<<endl;
         return 0;
}