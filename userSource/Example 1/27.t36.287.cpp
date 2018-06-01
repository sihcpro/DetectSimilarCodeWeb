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
const ll M=1e3+6;
const ll mod=1e13+77;
const ld esl=1e-5;

int n,m;
int a[M][M], x[M][M], c[M], d[M], cc[M], dd[M];
ll ans;

void solve(){
  cin>>n>>m;
 // cout<<n<<" "<<m<<endl;
  for(int i=1;i<=n;i++){
    //cout<<i<<" ";
    for(int j=1;j<=m;j++){
        cin>>a[i][j];
      //  cout<<a[i][j]<<" ";
        c[j] = max(a[i][j], c[j]);
        d[i] = max(a[i][j], d[i]);
    }
  }
 // return ;
  //  cout<<"****";
  for(int i=1;i<=n;i++)
    for(int j=1;j<=m;j++){
        x[i][j] = (c[j]==a[i][j])+(d[i]==a[i][j]);

        if(c[j]==a[i][j]) cc[j]++;
        if(d[i]==a[i][j]) dd[i]++;

        if(x[i][j]==0) ans+=a[i][j];
    }

   // return ;
   // cout<<"***";
  //  for(int i=1;i<=m;i++) cout<<cc[i]<<" ";
   // cout<<endl;
  //  for(int i=1;i<=n;i++) cout<<dd[i]<<" ";
   // cout<<endl<<endl;
 //for(int i=1;i<=n;i++){
   // for(int j=1;j<=m;j++) cout<<x[i][j]<<" ";
   // cout<<endl;
// }
  for(int i=1;i<=n;i++)
    for(int j=1;j<=m;j++){
        if(x[i][j]==1){
            if(a[i][j]==c[j] && cc[j]>=2){
                ans+=a[i][j];
                cc[j]--;
                x[i][j]=0;
            }

            if(a[i][j]==d[i] && dd[i]>=2){
                ans+=a[i][j];
                dd[i]--;
                x[i][j]=0;
            }
        }

        if(x[i][j]==2){
            int kt=0;
            if(a[i][j]==c[j] && cc[j]>=2){
             //   cout<<i<<" "<<j<<endl;
                ans+=a[i][j];
                cc[j]--;
                x[i][j]--;
                kt=1;
            }

            if(a[i][j]==d[i] && dd[i]>=2){
             //   cout<<i<<" "<<j<<endl;
                ans+=a[i][j];
                dd[i]--;
                x[i][j]--;
                kt=1;
            }
            //cout<<j<<" "<<m<<endl;
            if(kt)j--;
        }
    }

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