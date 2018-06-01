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

ll c,tmp;
ll n,a[10];
ll NP[10];
ll f[10],m;
ll check[10];
ll hv[10];
ll res;
map<ll,ll> checkhoanvi;
ll mang[1000000],p;

void kiemtrahoanvi()
{
	ll x=0;
	FOR(i,1,m)
	{
		x=x*10+hv[i];
	}
	if (x<=1) return;
//	cout<<x<<" ";
	if (checkhoanvi[x]) return;
	checkhoanvi[x]=1;
	p++;
	mang[p]=x;
	ll tmp=sqrt(x);
	FOR(i,2,tmp)
	{
		if (x%i==0) return;
	}
//	cout<<x<<" ";
	res++;
}

void hoanvi(ll k)
{

	FOR(i,1,m)
	{
		if (check[i]==0)
		{
			check[i]=1;
			hv[k]=f[i];
			if (k==m)
			{
				kiemtrahoanvi();
			}
			else hoanvi(k+1);
			check[i]=0;
		}
	}
}

void ketqua()
{
	m=0;
	FOR(i,1,n)
	{
		if (NP[i])
		{
			m++;
			f[m]=a[i];
		}
	}
	FOR(i,1,7) check[i]=0;
	hoanvi(1);
	
}

void xuly(ll k)
{
	FOR(i,0,1)
	{
		NP[k]=i;
		if (k==n)
		{
			ketqua();
		}
		else xuly(k+1);
	}
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin>>c;
    string s;
    while (c--)
    {
    	cin>>s;
    	n=0;
    	res=0;
    	FOR(i,0,s.size()-1)
    	{
    		n++;
    		a[n]=s[i]-'0';
		}
		xuly(1);
		FOR(j,1,p) checkhoanvi[mang[j]]=0;
		p=0;
		cout<<res<<endl;
	}
	return 0;
}