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
typedef pair < ll, ll > II;
ll d[11][11][2005];
const ll K=1e9+9;
ll a[2005],b[2005];
vector<II>v;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    ll n,m,k;
    cin>>n>>m>>k;
    v.pb(II(-1,-1));

    FOR (i,1,n) {
        ll x;
        cin>>x;
        v.pb(II(x,0));
    }
    FOR (i,1,m) {
        ll x;
        cin>>x;
        v.pb(II(x,1));
    }
    sort(all (v));
    FOR (i,1,m+n){
        if (v[i].second==0) a[i]=1;
        else a[i]=0;
    }
    //FOR (i,1,m+n) cout<<a[i];
    //cout<<endl;
    d[0][0][0]=1;
    FOR (N,1,m+n){
        if (a[N]==0){
            FOR (j,0,k){
                FOR (i,j,k){
                    d[i][j][N]=(d[i][j][N]+d[i][j][N-1])%K;
                    if (i>=1) d[i][j][N]=(d[i][j][N]+d[i-1][j][N-1])%K;
                    //cout<<i<<" "<<j<<" "<<N<<" "<<d[i][j][N]<<endl;
                }
            }
        }
        else{
            FOR (j,0,k){
                FOR (i,j,k){
                    d[i][j][N]=(d[i][j][N-1])%K;
                    if (j>=1) d[i][j][N]=(d[i][j][N]+d[i][j-1][N-1])%K;
                    //cout<<i<<" "<<j<<" "<<N<<" "<<d[i][j][N]<<endl;
                }
            }
        }
    }
    //cout<<d[0][1][0]<<endl;
    cout<<d[k][k][m+n];



         return 0;
}