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
int N,m,k,u,v,a[Nmax],l,r,mm,x;
vector <int> M[Nmax*4];
bool check;


void update(int i, int l, int r){
    if (l == r) {
        M[i].pb(a[l]);
        return;
    }
    int mid = (l+r) / 2;
    update(i*2,l,mid);
    update(i*2+1,mid+1,r);
    int s1 = M[i*2].size();
    int s2 = M[i*2+1].size();
    int i1 = 0, i2 = 0;
    while (i1 <= s1-1 && i2 <=  s2-1){
        if (M[i*2][i1] <= M[i*2+1][i2]) {
            M[i].pb(M[i*2][i1]);
            i1++;
        } else if (M[i*2][i1] >= M[i*2+1][i2]) {
            M[i].pb(M[i*2+1][i2]);
            i2++;
        }
    }
    For(j,i1,s1-1) M[i].pb(M[i*2][j]);
    For(j,i2,s2-1) M[i].pb(M[i*2+1][j]);
}


int query(int i,int l, int r){
    if (r < u || v < l) return 0;
    if (u <= l && r <= v){
        int le = 0;
        int re = M[i].size()-1;
         int pos = -1;
        while (le <= re){
            int mmm = (le+re)/2;
            if (M[i][mmm] <= x){
                pos = mmm;
                le = mmm+1;
            } else re = mmm-1;
        }
        if (pos != -1) {
            if (M[i][pos] == x) {
                    check = true;
                    return pos;
            } else return pos+1;
        } else return 0;
    }
    int t1,t2,mid = (l+r)/2;
    t1 = query(i*2,l,mid);
    t2 = query(i*2+1,mid+1,r);
    return t1+t2;
}


main() {
    sc("%d%d",&N,&m);
    For(i,1,N) sc("%d",&a[i]);
    update(1,1,N);
    For(i,1,m){
        sc("%d%d%d",&u,&v,&k);
        l = 0;
        r = M[1].size()-1;
        check = false;
        int res;
        while (l <= r){
            mm = (l+r) / 2;
            x = M[1][mm];
            check = false;
            int tmp = query(1,1,N);
            if (tmp == k-1 && check) {
                    pr("%d\n",x);
                    break;
            }
            if (tmp < k) l = mm+1; else r = mm-1;
        }
    }
}