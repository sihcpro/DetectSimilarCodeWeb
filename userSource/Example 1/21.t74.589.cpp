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

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);

    ll n,m,a,b;
    cin>>n>>m>>a>>b;
    n--;a--;b--;
    ll x=n/m + 1;
    if (b==n) b=m*x-1;
    n=m*x-1;

    ll A1=a/m, A2=a%m;
    ll B1=b/m, B2=b%m;
    //cout<<A1<<" "<<A2<<endl<<" "<<B1<<" "<<B2<<endl;
    if (A1==B1) {
        cout<<1; return 0;
    }
    if (A2==0 && B2==m-1) {
        cout<<1; return 0;
    }
    if (B1-A1==1) {
        cout<<2; return 0;
    }
    if (A2-B2==1) {
        cout<<2; return 0;
    }
    if (B2==m-1) {
        cout<<2; return 0;
    }
    if (A2==0){
        cout<<2; return 0;
    }
    cout<<3;

         return 0;
}