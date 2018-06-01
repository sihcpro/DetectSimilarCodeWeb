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


char a[10][10];
void solve(){
    for(int i=1;i<=4;i++)
        for(int j=1;j<=4;j++) cin>>a[i][j];

    for(int i=1;i<=3;i++)
    for(int j=1;j<=3;j++){
        int b=0,w=0;
        for(int i0=i; i0<=i+1; i0++)
        for(int j0=j; j0<=j+1; j0++){
            if(a[i0][j0]=='#') b++;
            else w++;
        }

        if(b>=3||w>=3){
            cout<<"YES";
            return ;
        }
    }

    cout<<"NO";
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