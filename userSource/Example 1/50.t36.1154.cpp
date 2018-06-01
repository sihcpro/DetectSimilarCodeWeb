#include<bits/stdc++.h>
#define X first
#define Y second
#define sqr(x) ((x)*(x))
#define pb push_back
#define mk(a,b) make_pair((a),(b))
#define all(a) (a).begin(),(a).end()
using namespace std;

typedef long long ll;
typedef long double ld;
typedef pair<ll, char> II;
typedef pair<II, int> III;

struct HEAP_CMP{ bool operator() (II a, II b) {return (a.X>b.X)||(a.X==b.X && a.Y>b.Y);}};
typedef priority_queue<II, vector<II>, HEAP_CMP> heap;
bool cmp(II a, II b){return a.X<b.X;}
const ll M=1e5+7;
const ll mod=1e9+7;
const ld eps=1e-5;
//const double PI=M_PI;

ll power(ll a, ll n){
    if(n==0) return 1;

    ll x=power(a, n/2);
    x=x*x%mod;

    if(n%2) return x*a%mod;
    return x;
}

ll d[M];

ll C( int n, int k )
{
    return d[n]*power(d[k]*d[n-k]%mod, mod-2)%mod;
}

ll n,p;
void solve(){
    

    d[0]=1;
    for(int i=1;i<M;i++) d[i] = d[i-1]*i%mod;
 

  //  cout<<n<<endl;
    while(cin>>n>>p) cout<<C(n-1, p-1)<<endl;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);

    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    //solve();
    solve();
    return 0;
}