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


char a[10][10];
ll trang,den;

int main()
{
    ios_base::sync_with_stdio(0);
    FOR(i,1,4)
    	FOR(j,1,4) cin>>a[i][j];
    FOR(i,1,3)
    {
    	FOR(j,1,3)
    	{
    		trang=0;
    		den=0;
    		if (a[i][j]=='#') den++;
    		else trang++;
    		if (a[i][j+1]=='#') den++;
    		else trang++;
    		if (a[i+1][j+1]=='#') den++;
    		else trang++;
    		if (a[i+1][j]=='#') den++;
    		else trang++;
    		if (trang>=3 || den>=3)
    		{
    			cout<<"YES";
    			return 0;
			}
		}
	}
	cout<<"NO";
	return 0;
}