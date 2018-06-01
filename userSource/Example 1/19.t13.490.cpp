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
string s;
ll check[105];

int main()
{
    ios_base::sync_with_stdio(0);
	cin>>s;
	FOR(i,1,s.size()-1)
	{
		if (s[i]=='/' && s[i-1]=='/') check[i]=1;
	}
	string res="";
	FOR(i,0,s.size()-1)
	{
		if (check[i]==0) res=res+s[i];
	}
	if (res.size()>1&&res[res.size()-1]=='/')
	{
		FOR(i,0,res.size()-2) cout<<res[i];
	}
	else cout<<res;
	return 0;
}