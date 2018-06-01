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

int tl[55], nh[55];
string st[55];

ll a[1005][1005], b[1005][1005];

int main()
{
	// freopen("test.txt", "r", stdin);
	
	cin >> n >> m;

	rep(0,i,n){
		rep(0,j,m){
			scanf("%lld", &a[i][j]);
			b[i][j]= 0;
		}
	}

	sp= 0;
	memset(b, 0, sizeof(b));
	rep(0,i,n){
		rep(0,j,m){
			if( a[i][sp] < a[i][j] )
				sp= j;
		}
		b[i][sp]= 1;
		// cout << a[i][sp] << endl;
	}

	rep(0,i,m){
		rep(0,j,n){
			if( a[sp][i] < a[j][i] )
				sp= j;
		}
		b[sp][i]= 1;
	}

	s= 0;
	rep(0,i,n){
		rep(0,j,m){
			if( !b[i][j] )
				s+= a[i][j];
		}
	}

	cout << s;

	return 0;
}