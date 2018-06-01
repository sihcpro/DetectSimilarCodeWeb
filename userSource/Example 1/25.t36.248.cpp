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

int n, m;
vector<II> a;
int ans = INT_MAX, ans2,x;
int c1,c2;
map<int, int> mp, mp2;

bool cmp(II aa, II bb){
    return (aa.X<bb.X)||(aa.X==bb.X&&aa.Y<bb.Y);
}

void solve(){
   cin>>n>>m;

   cin>>c1>>c2;

   for(int i=1;i<=n;i++){
        cin>>x;
        if(mp[x]==0){
            a.pb(II(x,1));
            mp[x]=1;
        }
        else mp[x]++;
   }
   for(int i=1;i<=m;i++){
        cin>>x;
        if(mp2[x]==0){
            a.pb(II(x,0));
            mp2[x]=1;
        }
        else mp2[x]++;
   }

   //cout<<a.size()<<endl;
  // for(int i=0;i<a.size();i++) cout<<a[i].X<<" ";
   //cout<<1<<endl;
  // return ;
   sort(a.begin(), a.end(), cmp);

 //  cout<<a.size()<<endl;

   for(int i=0;i<a.size()-1;i++){
       // cout<<i<<endl;
        if(abs(a[i].X-a[i+1].X)<=ans && a[i].Y!=a[i+1].Y){
            if(ans > abs(a[i].X-a[i+1].X)) ans2 = 0;
            ans = abs(a[i].X-a[i+1].X);

            //cout<<a[i].X<<endl;

            if(a[i].Y){
                ans2 += mp[a[i].X]*mp2[a[i+1].X];
            }
            else{
                ans2 += mp2[a[i].X]*mp[a[i+1].X];
            }
        }
   }

   cout<<(ans+abs(c1-c2))<< " "<<ans2;
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