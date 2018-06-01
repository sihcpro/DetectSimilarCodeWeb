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

#define mod 1000000007ll
#define rep( bg, i, num ) for(ll (i)= (bg); (i) < (num); (i)++)
#define repd( num, i, ed ) for(ll (i)= (num)-1; (i) >= ed; (i)--)
#define repkt( bg, i, num, kt ) for(ll (i)= (bg); (i) < (num) && (kt); (i)++)
#define repchar( i ) for(char (i)= 48; (i) <= 122; (i)++)
#define in(n) scanf("%lld", &n)
#define out(n) printf("%lld\n", n)
#define outS(s) printf("%s\n", s)
#define setA(a,n) for(ll i= 0; i < sizeof(a); i++) a[i]= n;

typedef ll cap;
typedef priority_queue<cap> pqmax;
typedef priority_queue<cap, vector<cap>, greater<cap> > pqmin;

ll junger= 0, mid= 0, top= 0, bot= 0, result= 0, sum= 0, s= 0, t= 0, d= 0, l= 0, sp= 0, k= 0, x, y, n, m, test, r;
bool kt= false, t1= false, t2= false;
string s1, s2;

ll a[100005], b[100005];

struct St{
	ll val;
	int vt;

	St(){
		val= 0;
		vt= 0;
	}
};

St ST[100005*4];

void update(int id, int l, int r, int i, ll val) {
    if (i < l || r < i) {
        return ;
    }
    if( val > ST[id].val && l <= i && r >= i ){
	    ST[id].val = val;
	    ST[id].vt = i;
    }
    if (l == r) {
        return ;
    }

    int mid = (l + r) / 2;
    update(id*2, l, mid, i, val);
    update(id*2 + 1, mid+1, r, i, val);
}

St get(int id, int l, int r, int u, int v) {
    if (v < l || r < u) {
        return ST[4*n];
    }
    if (u <= l && r <= v) {
        return ST[id];
    }
    // cout << l << " " << r << " " << u << " " << v << endl;
    int mid = (l + r) / 2;
    St le= get(id*2, l, mid, u, v);
    St ri= get(id*2 + 1, mid+1, r, u, v);
    if( le.val > ri.val )
    	return le;
    else
    	return ri;
}

int main()
{
	// freopen("test.txt", "r", stdin);
	
	cin >> n >> k;

	map<ll, bool> ma;
	rep(0,i,n){
		cin >> a[i];
		ma[ a[i] ]= false;
	}

	x= 0; 
	y= 0;
	// d= 0;
	while(x<=y && y <= n) {
		if( y == n ){
			ma[ a[x] ]= false;
			b[x]= y-x+1;
			update(1,0,n-1,x,b[x]);
			x++;
		}
		else if( ma[ a[y] ] ) {
			ma[ a[x] ]= false;
			b[x]= y-x+1;
			update(1,0,n-1,x,b[x]);
			x++;
		}
		else{
			ma[ a[y] ]= true;
			y++;
		}
	}

	// rep(0,i,n)
	// 	cout << i << " -> " << b[i]-1 << endl;
	// cout << ST[n].val << "  " << ST[n].vt << "  adlja\n";


	rep(0,i,k){
		cin >> x >> y;
		ll maxi= 1;
		St sp= get(1,0,n-1,x,y);
		// cout << x << " " << y << endl;
		// cout << "max is " << sp.val << " from " << sp.vt << endl;

		if( sp.vt + sp.val -2 <= y )
			cout << sp.val -1 << endl;
		else{
			maxi= max( min( sp.val-1, y-sp.vt+1 ), maxi );
			St sp2= get(1,0,n-1,x,sp.vt-1);
			while( sp2.val > maxi && sp2.vt >= x ){
				maxi= max( min( sp2.val-1, y-sp2.vt+1 ), maxi );
				sp2= get(1,0,n-1,x,sp2.vt-1);
				// cout << sp2.val << "  " << sp2.vt << "  " <<  maxi << endl;
			}
			// cout << "max2 is " << sp.val << " from " << sp.vt << endl;
			// y2= sp.vt;
			// rep(x,j,y-maxi+1){
			// 	maxi= max( min( b[j]-1, y-j+1 ), maxi );
			// 	// cout << " = " << maxi << endl;
			// }
			cout << maxi << endl;
		}
	}

	return 0;
}
