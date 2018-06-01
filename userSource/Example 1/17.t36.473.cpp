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

int ccw(II p1, II p2, II p3){
  ll a1 = p2.X - p1.X;
  ll b1 = p2.Y - p1.Y;
  ll a2 = p3.X - p2.X;
  ll b2 = p3.Y - p2.Y;
  ll t  = a1*b2 - a2*b1;
  if(abs(t) < esp) return 0;
  else if (t<0) return -1;
  else return 1;
}

II a,b,c;

void solve(){
    cin>>a.X>>a.Y;
    cin>>b.X>>b.Y;
    cin>>c.X>>c.Y;
    int x=ccw(a,b,c);
    if(x==1){
        cout<<"LEFT";
        return ;
    }

    if(x==0){
        cout<<"TOWARDS";
    }
    else cout<<"RIGHT";
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