#include<bits/stdc++.h>

#define mk make_pair
#define pb push_back
#define fi first
#define se second

using namespace std;

typedef long long ll;
const ll INF = INT_MAX;
const ll MAXN = 1e6+7;

int n;
float a[MAXN];
int fen[MAXN];

int sum(int i)
{
    int ret = 0;
    while (i > 0)
    {
        ret += fen[i];
        i -= i & (-i);
    }
    return ret;
}

void update(int maxx, int i, int val)
{
    while (i <= maxx+1)
    {
       fen[i] += val;
       i += i & (-i);
    }
}
 
int main()
{
//	ios::sync_with_stdio(0);
//	cin.tie(NULL);
//	freopen("inp.in", "r", stdin);
	cin >> n;
	for(int i=0; i<n; i++) cin >> a[i];
	int ans = 0;
	int maxx = 0;
    for (int i=0; i<n; i++)
    {
    	if (maxx < a[i]) maxx = a[i];
	}
            
    for (int i=n-1; i>=0; i--)
    {
        ans += sum(a[i]-1);
        update(maxx, a[i], 1);
    }
 	cout << ans;
}