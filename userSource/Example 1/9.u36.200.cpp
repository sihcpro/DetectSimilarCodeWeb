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

//bool sa[M];
int x;
vector<int> a;
int vx[15];
map<int, int> mp;

int checknt(int x){
    int sq=(int)sqrt(x);
    if(x==2) return 1;
    if(x<2) return 0;
    for(int i=2;i<=sq;i++) if(x%i==0) return 0;
    return 1;
}

int sinhhv(int n){
    int res=0;
    int b[15];

    for(int i=0;i<n;i++) b[i]=i;
    //cout<<vx.size()<<"---\n";
    //vx.pb(1);

    do{
        int num=0;

        for(int i=0;i<n;i++) num = num*10 + vx[b[i]];
      //  cout<<num<<endl;

        if(!mp[num]){
            mp[num]=1;
            if(checknt(num)){
                res++;
                //cout<<num<<endl;
            }
        }
    }while(next_permutation(b, b+n));

    return res;
}

int tinhtoan(){
    int gh=(1<<a.size()), ans=0;
    //cout<<gh<<endl;
    for(int i=1;i<gh;i++){
        int bit = i, t=0, n=0;

        while(bit>0){
            if(bit&1) vx[n++]=a[t];
            t++;
            bit>>=1;
        }

        ans+=sinhhv(n);
    }
    return ans;
}



void xuli(){
        string s;
        cin>>s;
        a.clear();
        mp.clear();
        for(int i=0;i<s.size();i++) a.pb(s[i]-'0');

      //  cout<<a[0]<<endl;
        cout<<tinhtoan()<<endl;
}

void solve(){
    int t;
//    sang();
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