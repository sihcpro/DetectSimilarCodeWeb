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

bool comp[100000005];

void sieve(ll n){
    comp[1]=1;
    comp[0]=1;
    for (int i=2; i*i<=n; i++) {
        if (comp[i]==0) for (ll j=i; j*i<=n; j++) {
            comp[i*j]=1;
        }
    }
}
string s;
ll a[10],b[10];
ll mu[10];
set<int> res;
vector<int> v;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    sieve(100000000);
    mu[0]=1;
    FOR (i,1,8) mu[i]=mu[i-1]*10;
    ll t;
    cin>>t;
    FOR (z,1,t){

        ll T=0;
        res.clear();
        cin>>s;
        FOR (i,0,s.length()-1){
            a[i]=s[i]-'0';
        }
        sort(a,a+s.length());
        ll n=s.length();
        FOR (w,1,(1LL<<n)-1){
            v.clear();
            FOR (i,0,n-1){
                if ((1LL<<i)&w) v.pb(a[i]);
            }
            FOR (i,0,v.size()-1) b[i]=v[i];
            do {
                //for (auto i:v) cout<<i<<" "; cout<<endl;
                if (b[v.size()-1]==0) continue;
                ll D=0;
                FOR (j,0,v.size()-1){
                    D+=mu[j]*b[j];
                }
                //cout<<D<<endl;
                T++;
                if (comp[D]==0) {res.insert(D);}
            }while (next_permutation(b,b+v.size()));
        }
        cout<<res.size()<<endl;
        //cout<<T<<endl;
    }

         return 0;
}