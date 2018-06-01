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

ll n;
ll NP[15];
ll a[15];
ll res=0;
map<ll,ll> check;

void ketqua(ll m)
{
////	FOR(i,1,4) cout<<NP[i]<<"-------";
//	cout<<endl;
	FOR(x,0,9)
	{
		FOR(y,0,9)
		{
			FOR(i,1,m)
			{
				if (NP[i]==0) a[i]=x;
				else a[i]=y;
			}
			ll tmp=0;
			FOR(i,1,m)
			{
				tmp=tmp*10+a[i];
			}
//			if (tmp<=n)cout<<tmp<<endl;
//			if (tmp==12) cout<<"reue";
			if (tmp<=n&&!check[tmp])
			{
				res++;
				check[tmp]=1;
//				cout<<tmp<<endl;
			}
		}
	}
}

void sinhNP(ll x,ll m)
{
	FOR(i,0,1)
	{
		NP[x]=i;
		if (x==m) ketqua(m);
		else sinhNP(x+1,m);
	}
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin>>n;
    FOR(i,1,10) sinhNP(1,i);
    cout<<res-1;
	return 0;
}