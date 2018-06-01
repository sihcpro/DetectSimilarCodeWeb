#include <bits/stdc++.h>

using namespace std;

#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define ldb ldouble
#define PI 3.14159265

//typedef tuple<int, int, int> t3;
typedef long long ll;
typedef unsigned long long ull;
typedef double db;
typedef long double ld;
typedef pair <int, int> pii;
typedef pair <ll, ll> pll;
typedef pair <ll, int> pli;
typedef pair <db, db> pdd;

#define siz(x) (int)(x).size()
#define Se second
#define Fi first
#define IN insert
#define PB push_back
#define P pop_back
#define PU push
#define PO pop
#define F find
#define ED end()
#define MP( a, b) make_pair( a, b )

#define MOD 1000000007ll
#define rep( bg, i, num ) for(ll (i)= (bg); (i) < (num); (i)++)
#define repd( num, i, ed ) for(ll (i)= (num)-1; (i) >= ed; (i)--)
#define repkt( bg, i, num, kt ) for(ll (i)= (bg); (i) < (num) && (kt); (i)++)
#define repchar( i ) for(char (i)= 48; (i) <= 122; (i)++)
#define in(n) scanf("%lld", &n)
#define out(n) printf("%lld\n", n)
#define outS(s) printf("%s\n", s)
#define setA(a,n) for(ll i= 0; i < sizeof(a); i++) a[i]= n;

typedef pair<ll, ll> cap;
typedef priority_queue<cap> pqmax;
typedef priority_queue<cap, vector<cap>, greater<cap> > pqmin;

ll junger= 0, mid= 0, top= 0, bot= 0, result= 0, sum= 0, s= 0, t= 0, d= 0, l= 0, sp= 0, k= 0, x, y, n, m, test, r;
bool kt= false, t1= false, t2= false;
string s1, s2;

// const long INFINITY= 1000000009ll;
ll nodes[100005*4];
void update(int id, int l, int r, int u, int v, ll val) {
    if (v < l || r < u) {
        return ;
    }
    if ( l <= u && u <= r )
        nodes[id] = min( nodes[id], val);
    if( l == r )	return;
    int mid = (l + r) / 2;

    update(id*2, l, mid, u, v, val);
    update(id*2+1, mid+1, r, u, v, val);

    nodes[id] = min(nodes[id*2], nodes[id*2+1]);
}

ll get(int id, int l, int r, int u, int v) {
    if (v < l || r < u) {
        return MOD;
    }
    if (u <= l && r <= v) {
        return nodes[id];
    }
    int mid = (l + r) / 2;

    return min(get(id*2, l, mid, u, v),
        get(id*2+1, mid+1, r, u, v));
}


int main()
{
	// freopen("test.txt", "r", stdin);
	
	memset(nodes, MOD, sizeof(nodes));
	cin >> n >> m;
	rep(0,i,n){
		scanf("%lld", &sp);
		update(1, 1, n, i+1, i+1, sp);
	}

	rep(0,i,m){
		scanf("%lld %lld", &x, &y);
		printf("%lld\n", get(1, 1, n, x, y));
	}

	return 0;
}