#include<bits/stdc++.h>


#define X  first
#define Y  second
typedef long long ll;

#define FOR(i,a,b) for(ll i = a;i<=b;i++)
#define FOD(i,a,b) for(ll i = a;i>=b;i--)
#define pb push_back
#define mp make_pair

using namespace std;

typedef pair<ll,ll>ii;
typedef priority_queue<ll,vector<ll>,greater<ll> > heap_min;
const ll maxN = 1e6+5;
const ll inf = 1e10;
const ll mod = 1e9+7;

ll n,m,c1,c2;
ll a[500005],b[500005];
ll t1=1,t2=1;
map<ll,ll> f;
ll minn=1e19;

void xuly1();
void xuly2();

void xuly1()
{
	while (a[t1]<=b[t2])
	{
		if (b[t2]-a[t1]<=minn)
		{
			f[b[t2]-a[t1]]++;
			minn=b[t2]-a[t1];
//			cout<<t1<<" "<<t2<<" "<<minn<<endl;
		}
		t1++;
		if (t1>n) return;
	}
//	cout<<"end "<<t1<<" "<<t2<<" "<<a[t1]-b[t2]<<endl;
//	if (a[t1]-b[t2]<=minn)
//	{
//		f[a[t1]-b[t2]]++;
//		minn=a[t1]-b[t2];
//		cout<<"yes "<<minn<<endl;
//	}
	xuly2();
}

void xuly2()
{
	while (a[t1]>=b[t2])
	{
		if (a[t1]-b[t2]<=minn)
		{
			f[a[t1]-b[t2]]++;
			minn=a[t1]-b[t2];
		}
		t2++;
		if (t2>m) return;
	}
//	if (b[t2]-a[t1]<=minn)
//	{
//		f[b[t2]-a[t1]]++;
//		minn=b[t2]-a[t1];
//		cout<<"yes "<<minn<<endl;
//	}
	xuly1();
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin>>n>>m;
    cin>>c1>>c2;
    FOR(i,1,n) cin>>a[i];
    FOR(i,1,m) cin>>b[i];
    sort(a+1,a+1+n);
    sort(b+1,b+1+m);
    if (a[1]>b[1]) xuly2();
    else xuly1();
    cout<<minn+abs(c1-c2)<<" "<<f[minn];
	return 0;
}