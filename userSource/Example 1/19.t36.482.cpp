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
const ll mod=1e15;
const ld esp=1e-5;

string s,ss;

void solve(){
    cin>>s;
    for(int i=1;i<s.size();i++){
        if(s[i]!=s[i-1]||s[i]!='/') ss+=s[i];
    }

    if(ss[ss.size()-1]=='/') ss[ss.size()-1]=' ';

    if(ss[0]!='/') cout<<"/";
    cout<<ss;
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