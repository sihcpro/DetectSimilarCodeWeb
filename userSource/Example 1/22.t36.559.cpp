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
const ll M=1e7+6;
const ll mod=1e7+3;
const ld esp=1e-5;

int a, b, k;
int sa[M];

void sang(){
    sa[0]=sa[1]=1;
    for(int i=2;i<M;i++)
    if(!sa[i])
        for(int j=i*2;j<M;j+=i) sa[j]=1;

    sa[0]=0;
    for(int i=1;i<M;i++){
        if(sa[i]==0) sa[i]=sa[i-1]+1;
        else sa[i]=sa[i-1];
    }
}

bool check(int l){
    for(int i=a+l-1; i<=b; i++)
    if(sa[i]-sa[i-l]<k) return 0;

    return 1;
}
void chatnhiphan(int l, int r){
    if(l>=r){
       for(int i=max(r-2,1); i<=min(l+1, b-a+1); i++)
       if(check(i)){
            cout<<i;
            return;
       }

       cout<<-1;
       return ;
    }

    int mid = (l+r)/2;
    if(check(mid)) chatnhiphan(l, mid);
    else chatnhiphan(mid+1, r);
}
void solve(){
   cin>>a>>b>>k;

   sang();
   chatnhiphan(1, b-a+1);
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