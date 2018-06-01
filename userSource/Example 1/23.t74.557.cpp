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
ll mu[15];
vector<ll> v;
int main()
{//IN;
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    mu[0]=1;
    FOR (i,1,10) mu[i]=mu[i-1]*10;
    FOR (i,0,9){
        FOR (j,0,9){
            FOR (k,0,10){
                FOR (z,0,1LL<<k) {
                    ll sum=0;
                    FOR (u,0,k-1){
                        if (z&(1LL<<u)) sum+=mu[u]*i;
                        else sum+=mu[u]*j;
                    }

                    s.insert(sum);

                }
            }
        }
    }
    ll dem=0;
    ll n;
    cin>>n;
    for (set<ll> :: iterator it=s.begin(); it!=s.end(); it++) {
        if (*it>n) break;
        dem++;
    }
    cout<<dem-1<<endl;
         return 0;
}