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

const ll M=1e5+6;
const ll mod=1e13+77;
const ld esl=1e-5;


int n,k;
ll a[M];


void solve(){
    cin>>n>>k;
    for(int i=1;i<=n;i++) cin>>a[i];
    sort(a+1, a+n+1);

    cout<<a[k];
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