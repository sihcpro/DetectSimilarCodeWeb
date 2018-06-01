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

typedef pair < int, int > II;
typedef pair < ll, ll > pll;
ll x[5],y[5];
int main()
{//IN;
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    FOR (i,1,3) cin>>x[i]>>y[i];
    ll A=x[2]-x[1],B=y[2]-y[1],C=x[3]-x[2],D=y[3]-y[2];
    ll X=A*D-B*C;
    if (X==0) {
        cout<<"TOWARDS";
    }
    else if (X<0){
        cout<<"RIGHT";
    }
    else cout<<"LEFT";


         return 0;
}