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
const ll M=2e5+7;
const ll mod=1e9+7;
const ld eps=1e-5;
//const double PI=M_PI;


void solve(){
    ll x,y;
    
    cin>>x>>y;
    if(x*y>0){
        if(x>0) cout<<"I";
        else cout<<"III";
    }
    else{
        if(x>0) cout<<"IV";
        else cout<<"II";
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);

   // freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    //solve();
    solve();
    return 0;
}