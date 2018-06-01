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

const ll K=1e6+3;

ll mu(ll a, ll n) {
    if (n==0) return 1;
    ll q=mu(a,n/2);
    if (n%2==0) return q*q%K;
    return q*q%K*a%K;
}


int main()
{//IN;
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    ll n;
    cin>>n;
    if (n==0) cout<<1;
    else  cout<<mu(3,n-1);

         return 0;
}