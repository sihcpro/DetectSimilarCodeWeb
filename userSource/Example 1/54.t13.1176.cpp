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

ll k,a,b;
string astr,bstr;
ll lt;

int main()
{
    ios_base::sync_with_stdio(0);
    cin>>k>>astr>>bstr;
    lt=1;
    FOD(i,astr.size()-1,0)
    {
    	a+=(astr[i]-'0')*lt;
		lt*=k;
	}
	lt=1;
    FOD(i,bstr.size()-1,0)
    {
    	b+=(bstr[i]-'0')*lt;
		lt*=k;
	}
//	cout<<a<<" "<<b<<endl;
	ll res=a+b;
//	cout<<res<<endl;
	string kq="";
	
	while (res>0)
	{
		ll tmp=res%k;
		char tmp2=tmp+'0';
		kq=tmp2+kq;
		res/=k;
//		cout<<kq<<endl;
	}
	cout<<kq;
	return 0;
}