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
typedef pair<int, int> II;
typedef pair<II, int> III;

struct HEAP_CMP{ bool operator() (ll a, ll b) {return a>b;}};
typedef priority_queue<ll, vector<ll>, HEAP_CMP> heap;
const ll M=1e7+6;
const ll mod=1e13+77;
const ld esl=1e-5;

int n;
ll a[M];
ll ans;
ll b[20];
int t;

void solve(){
   cin>>n;
   for(int i=0;i<n;i++) cin>>a[i];
   sort(a, a+n);

   for(int i=0;i<3;i++) b[t++]=a[i];

   for(int i=max(3, n-3);i<n;i++) b[t++]=a[i];

   for(int i=0;i<t;i++) for(int j=i+1; j<t; j++) ans = max(ans, b[i]*b[j]);

   for(int i=0;i<t;i++) for(int j=i+1; j<t; j++) for(int k=j+1; k<t; k++)ans = max(ans, b[i]*b[j]*b[k]);

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