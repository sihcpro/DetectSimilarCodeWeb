#include <bits/stdc++.h>

using namespace std;

#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define ldb ldouble

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

string answer(){
	string ss[5];
	x= y= 0;
	rep(0,i,3){
		cin >> ss[i];
		rep(0,j,3){
			x+= (ss[i][j] == 'X');
			y+= (ss[i][j] == '0');
			// cout << (int) (ss[i][0] == 'X') << ";";
		}
	}
	// cout << x << "  " << y << endl;
	if( x < y || x > y+1 )
		return "illegal";
	int win[255];
	memset( win, 0, sizeof(win));
	rep(0,i,3){
		if( ss[i][0] == ss[i][1] && ss[i][0] == ss[i][2] )
			win[ ss[i][0] ]++;
		if( ss[0][i] == ss[1][i] && ss[0][i] == ss[2][i] )
			win[ ss[0][i] ]++;
	}
	if( ss[0][0] == ss[1][1] && ss[1][1] == ss[2][2] )
		win[ ss[1][1] ]++;
	if( ss[0][2] == ss[1][1] && ss[1][1] == ss[2][0] )
		win[ ss[1][1] ]++;
	if( x == y+1 ){						//	'X' moi danh
		if( win['0'] > 0  )				//	0 thang roi ma X con di tiep
			return "illegal";
		if( win['X'] > 0 )				//	X thang
			return "the first player won";
		if( x + y == 9 )
			return "draw";
		return "second";				//	chua thang
	}
	else if( x == y ){					//  '0' moi danh
		if( win['X'] > 0  )				//	X thang roi ma 0 con di tiep
			return "illegal";
		if( win['0'] > 0 )				//	0 thang
			return "the second player won";
		return "first";					//	chua thang
	}
}

int main()
{
	// freopen("test.txt", "r", stdin);
	
	cin >> test;
	while( test-- ){
		cout << answer() << endl;
	}
	
	
	return 0;
}
