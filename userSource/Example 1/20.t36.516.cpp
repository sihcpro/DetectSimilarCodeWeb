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
typedef pair<ll, ll> II;
typedef pair<II, int> III;

struct HEAP_CMP{ bool operator() (ll a, ll b) {return a>b;}};
typedef priority_queue<ll, vector<ll>, HEAP_CMP> heap;
const ll M=2e5+6;
const ll mod=1e6+3;
const ld esp=1e-5;


ll power(ll a, int n){
    if(n==0) return 1;
    ll x=power(a, n/2);
    x=x*x%mod;
    if(n%2) return x*a%mod;
    return x;
}

ll s[1005], ans, p=1, n;

void solve(){
    cin>>n;

    if(n==0) {
        cout<<1;
        return ;
    }

    int t=0;
    ans = power(2,n)*power(2,n)%mod;
    //cout<<ans<<endl;

    for(int i=n-1;i>=0;i--){
        ans = (ans-power(2, i)*power(2,i)%mod*power(3,t)%mod + mod*mod)%mod;
        //cout<<power(2,i)<<" "<<power(3,t)<<endl;
        t++;
    }

 //   cout<<t<<endl;
    ans = (ans - power(3,t-1)*2 +mod*mod)%mod;

    cout<<ans;
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