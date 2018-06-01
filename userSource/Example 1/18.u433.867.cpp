#include <bits/stdc++.h>
using namespace std;

#define mod 1e9+7
#define X first
#define Y second
#define pb push_back
#define mp make_pair
#define FOR(i,a,b) for (int i = (a); i <= (b); i++)
#define FORE(i,a,b) for (int i = (a); i >= (b); i--)

typedef long long ll;
typedef pair<ll,ll> ii;
priority_queue <ll,vector<ll>,greater<ll> > heap_min;

int main()
{
    int n,m;
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    int f[4][4];
    FOR(i,0,3)
	FOR(j,0,3)
	{
	     char c;
	     cin >> c;
	     if (c == '#')
		f[i][j] = 1;
   	     else
		f[i][j] = 0;
	}
    bool flag = false;
    FOR(i,1,3)
	FOR(j,1,3)
	{
	     int res = f[i][j] + f[i-1][j] + f[i][j-1] + f[i-1][j-1];
	     if (res != 2)
	     {
		flag = true;
		break;
	     }
	}
    if (flag)
    	cout << "YES";
    else
	cout << "NO";
    return 0;
}