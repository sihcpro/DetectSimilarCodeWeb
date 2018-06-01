#include <bits/stdc++.h>
using namespace std;

#define sc scanf
#define pr printf
#define pb push_back
#define mp make_pair

#define ll long long
#define ld long double

typedef pair <int , int> pii;
typedef pair <ll , ll> pll;
typedef pair <ld , ld> pdd;
#define X first
#define Y second

#define For(i,a,b) for(int i=(a); i<=(b); i++)
#define Ford(i,a,b) for(int i=(a); i>=(b); i--)
#define SQR(z) ((z)*(z))
#define all(x) x.begin(),x.end()
#define ms(s,n) memset(s,n,sizeof(s))

/************************************************************/

int numbit(int x) { return (1 << x) - 1; }
int getbit(int x, int i) { return (x >> i) & 1; }
int onbit(int x, int i) { return x | (1 << i); }
int offbit(int x, int i) { return x & (~(1 << i)); }

/************************************************************/

const int maxInt = 1000000000;
const int Nmax = 100001;

/************************************************************/
int N,k,u,v,a[Nmax],M[Nmax*4];

void update(int i, int l, int r,int u, int v){
    if (r < u || v < l) return;
    if (l == r) {
        M[i] = a[l];
        return;
    }
    int mid = (l+r) / 2;
    update(i*2,l,mid,u,v);
    update(i*2+1,mid+1,r,u,v);
    M[i] = min(M[i*2],M[i*2+1]);
}

int query(int i, int l, int r){
    if (r < u || v < l) return maxInt;
    if (u <= l && r <= v) return M[i];
    int mid = (l+r) / 2;
    int res = min(query(i*2,l,mid),query(i*2+1,mid+1,r));
    return res;
}

main() {
    sc("%d%d",&N,&k);
    For(i,1,N) sc("%d",&a[i]);
    update(1,1,N,1,N);
    For(i,1,k){
        int c;
        sc("%d",&c);
        if (c == 1){
            sc("%d%d",&u,&v);
            int tmp = query(1,1,N);
            pr("%d\n",tmp);
        } else {
            sc("%d%d",&u,&v);
            a[u] = v;
            update(1,1,N,u,u);
        }
    }
}