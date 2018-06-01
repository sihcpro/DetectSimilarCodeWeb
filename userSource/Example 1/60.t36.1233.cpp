#include<bits/stdc++.h>
#define X first
#define Y second
#define sqr(x) ((x)*(x))
#define pb push_back
#define is insert
#define ll long long
#define mk(a,b) make_pair((a),(b))
#define all(a) (a).begin(),(a).end()
#define foru(i,b,e) for(int i=b; i<=e; ++i)
#define ford(i,e,b) for(int i=e; i>=b; --i)
using namespace std;

typedef long double ld;
typedef pair<ld, ll> II;
typedef pair<II, int> III;

struct HEAP_CMP{ bool operator() (II a, II b) {return (a.X>b.X)||(a.X==b.X && a.Y>b.Y);}};
typedef priority_queue<II, vector<II>, HEAP_CMP> heap;
bool cmp(II a, II b){return (a.X<b.X);}
const ll M=1e5+7;
const ll mod=1e9;
const ll MAX = 1e18+7;
const ld eps=1e-5;

int n;
int fen[M];
void update(int p, int val){
    for(int i = p; i <= n; i += i & -i)
        fen[i] += val;
}

int sum(int p) {
    int ans = 0;
    for(int i = p; i; i -= i & -i)
        ans += fen[i];
    return ans;
}


ld x;
vector<II> a;
ll ans;

void solve(){
    cin>>n;
    foru(i,1,n){
        cin>>x;
        a.pb(II(x,i));
    }

   // cout<<n<<endl;
    sort(all(a), cmp);

    for(int i=0;i<a.size();i++){
        ans += sum(n)-sum(a[i].Y);
        update(a[i].Y, 1);
    }

    cout<<ans;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);

   // freopen("inp.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    //solve();
    //int t;
    //cin>>t;
    //while(t--)
    solve();
    return 0;
}