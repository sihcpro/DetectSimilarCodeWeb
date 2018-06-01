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
const ll M=1e5+6;
const ll mod=1e13+77;
const ld esl=1e-5;




void xuli(){
    int n;

    ll	ans=0,x;
    heap h;

    cin>>n;

    for(int i=0;i<n;i++){
        cin>>x;
        h.push(x);
      //  ans-=x;
    }

    while(h.size()>1){
        ll a=h.top();
        h.pop();
        ll b=h.top();
        h.pop();

        h.push(a+b);
        ans+= a+b;
    }

    cout<<ans<<endl;
}

void solve(){
    int t;
    cin>>t;
    while(t--) xuli();
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