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
const ll M=18000;
const ll mod=1e7+3;
const ld esp=1e-5;

ll n;
int ns;
vector<int> a;
map<ll, int> mp;

int check(int x, int y){
    int res=0;
    for(int s=1;s<=ns;s++){
    int gh = (1LL<<s);

    //cout<<gh<<endl;
    for(int  bi=0;bi<gh; bi++){
        int bit=bi;
        ll t=0;
        for(int i=1;i<=s;i++){
            if(bit&1LL) t=t*10+x;
            else t=t*10+y;
            bit>>=1LL;
        }

      //  cout<<t<<endl;
        if(t<=n){
            if(!mp[t]){
                mp[t]=1;
                res++;
                a.pb(t);
              //  cout<<t<<endl;
            }
        }
    }

    }
    return res;
}

int ans;
void solve(){
    cin>>n;
    ll nn=n;

    while(nn>0){
        nn/=10;
        ns++;
    }

    //cout<<ns<<endl;

    for(int i=0;i<=9;i++)
        for(int j=i+1;j<=9;j++) ans+= check(i,j);
    cout<<ans-1;

    //sort(a.begin(),a.end());
    //for(int i=0;i<a.size();i++) cout<<a[i]<<" ";
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