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

ll d[100005][10],e[100005][10];
string a;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cin>>a;
    ll n=a.size();
    a='0'+a;
    ll k=0;
    FOR (i,1,n){
        int c=a[i]-'0';
        FOR (j,0,5){
            e[i][(j*10+c)%6]+=e[i-1][j];
        }

        FOR (j,0,5){
            d[i][j]+=d[i-1][j]+e[i-1][j];
        }
        if (c){
            e[i][c%6]++;
        }
        else{
            k++;
        }
        //FOR (j,0,5) cout<<i<<" "<<j<<" "<<d[i][j]<<" "<<e[i][j]<<endl;
    }
    cout<<d[n][0]+e[n][0]+k<<endl;


         return 0;
}