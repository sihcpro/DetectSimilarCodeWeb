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

bool a[10000005];

void sanNT(){
	memset(a, false, sizeof(a));
	a[0]= a[1]= true;
	for(int i= 2; i <= 1e7; i++){
		if( !a[i] )
			sp= i*2;
			while( sp <= 1e7 ){
				a[sp]= true;
				sp+= i;
			}
	}
}

int b[10];
string sortNum(ll num){
	l= 0;
	s1= "";
	while(num > 0){
		b[l++]= num%10;
		num/= 10;
		s1+= "0";
	}
	sort(b, b+l);
	rep(0,i,l)
		s1[i]= '0'+b[i];
	return s1;
}
map<string, ll> ma;
void saveNum(int num){
	l= 0;
	s1= "";
	while(num > 0){
		b[l++]= num%10;
		num/= 10;
		s1+= "0";
	}
	sort(b, b+l);
	rep(0,i,l)
		s1[i]= '0'+b[i];
	// rep(l,i,8){
		// cout << s1 << endl;
		ma[s1]++;
	// 	s1= "0"+s1;
	// }
}
void san2(){
	rep(2,i,1e7){
		if(!a[i]){
			saveNum(i);
		}
	}
}

int main()
{
	// freopen("test.txt", "r", stdin);
	
	sanNT();
	san2();

	// saveNum(54234);

	cin >> n;
	set<string> se;
	rep(0,i,n){
		cin >> s1;
		ll j, k;
		// cout << s1 << endl;
		s= 0;
		rep(1,i,1<<s1.length()){
			s2= "";
			j= i;
			for(k= 0; j > 0; k++, j>>= 1){
				if(j&1){
					s2+= "0";
					s2[s2.length()-1]= s1[k];
				}
			}
			sort(s2.begin(), s2.end());
			se.insert(s2);
			// cout << "=====" << s2 << "\n";
		}

		// cout << s2 << "  " << s << endl;
		// cout << sortNum(m) << endl;
		for (set<string>::iterator it=se.begin(); it!=se.end(); ++it){
			// cout << *it << endl;
			s+= ma[(*it)];
		}
		cout << s << endl;
		se.clear();
	}

	
	return 0;
}
