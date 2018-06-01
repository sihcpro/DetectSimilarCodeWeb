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
const ll maxN = 1e5+5;
const ll inf = 1e10;
const ll mod = 1e9+7;

ll n,p;
ll ngto[100005],ntNum=0,F[100005];
ll tu[100005],mau[100005],kq[100005];

void sanNGTO()
{
	FOR(i,2,100000)
	{
		if (F[i]==0) F[i]=ngto[++ntNum]=i;
		ll j=1;
		while (j<=ntNum && ngto[j]<=F[i] && ngto[j]*i<=100000)
		{
			F[ngto[j]*i]=ngto[j];
			j++;
		}
	}
}

int main()
{
    ios_base::sync_with_stdio(0);
    sanNGTO();
//    FOR(i,1,10) cout<<ngto[i]<<endl;
    while (cin>>n>>p)
    {
    	FOR(i,1,ntNum)
    	{
    		tu[i]=0;
    		mau[i]=0;
		}
    	FOR(i,1,ntNum)
    	{
    		ll tmp=n-1;
    		while (tmp>0)
    		{
    			tmp/=ngto[i];
    			tu[i]+=tmp;
			}
//			cout<<tu[i]<<endl;
			tmp=n-p;
			while (tmp>0)
    		{
    			tmp/=ngto[i];
    			mau[i]+=tmp;
			}
			tmp=p-1;
			while (tmp>0)
    		{
    			tmp/=ngto[i];
    			mau[i]+=tmp;
			}
		}
		ll res=1;
		FOR(i,1,ntNum)
		{
			kq[i]=tu[i]-mau[i];
			FOR(j,1,kq[i])
			{
				res=(res*ngto[i])%mod;
			}
		}
		cout<<res<<endl;
	}
	return 0;
}