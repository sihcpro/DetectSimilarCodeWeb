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

ll x,y;

int main()
{
    ios_base::sync_with_stdio(0);
    cin>>x>>y;
    if (x>0)
    {
    	if (y>0)
    	{
    		cout<<"I";
		}
		else
		{
			cout<<"IV";
		}
	}
	else
	{
		if (y>0)
		{
			cout<<"II";
		}
		else
		{
			cout<<"III";
		}
	}
	return 0;
}