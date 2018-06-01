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


int n,m,a,b;

void solve(){
   cin>>n>>m>>a>>b;

   int ca=(a)/m, da=a%m;
   int cb=(b)/m, db=b%m;

   if(da==0) da=m, ca--;
   if(db==0) db=m, cb--;

  // cout<<ca<<" "<<cb<<" "<<da<< " "<<db<<endl;
  
   if(b==n){
        if(da==1){
            cout<<1;
        }else cout<<2;
        return ;
   }

   if(ca==cb){
        cout<<1;
        return ;
   }

   if(da==1&&db==m){
        cout<<1;
        return ;
    }

   if(cb==ca+1){
        cout<<2;
        return ;
   }

   if(da==1||db==m){
        cout<<2;
        return ;
   }


   if(da==db+1){
        cout<<2;
        return ;
   }

   cout<<3;
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