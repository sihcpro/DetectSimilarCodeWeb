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

ll c1,c2,n,m;

ll a[500005],b[500005];

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cin>>n>>m;
    cin>>c1>>c2;
    FOR (i,1,n) cin>>a[i];
    FOR (i,1,m) cin>>b[i];

    sort(a+1,a+n+1);
    sort(b+1,b+m+1);
    ll R=INF;
    FOR (i,1,n){
        int j=lower_bound(b+1,b+m+1,a[i])-b;
        R=min(R,abs(a[i]-b[j]));
        if (j) R=min(R,abs(a[i]-b[j-1]));
    }
    ll s=0;
    FOR (i,1,n){
        int j=lower_bound(b+1,b+m+1,a[i])-b;
        //R=min(R,abs(a[i]-b[j]));
        if (abs(a[i]-b[j])==R) s++;
        if (j && abs(a[i]-b[j-1])==R) s++;
    }
    cout<<R+abs(c1-c2)<<" "<<s<<endl;


         return 0;
}