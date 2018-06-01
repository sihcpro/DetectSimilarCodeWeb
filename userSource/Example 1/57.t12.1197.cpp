#include<bits/stdc++.h>

#define mk make_pair
#define pb push_back
#define fi first
#define se second

using namespace std;

typedef long long ll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
const int INF = INT_MAX;
const int MAXN = 1e5+7;

int n,k;
int arr[MAXN];
int st[4*MAXN];

void build(int id, int l, int r)
{
	if(l==r)
	{
		st[id] = arr[l];
		return;
	}
	int mid = (l+r)/2;
	build(id*2, l, mid);
	build(id*2+1, mid+1, r);
	st[id] = min(st[2*id], st[2*id+1]);
}

int get(int id, int l, int r, int u, int v)
{
	if(v<l || u>r)
	{
		return INF;
	}
	if(u<=l && r<=v)
	{
		return st[id];
	}
	int mid = (l+r)/2;
	return min(get(id*2, l, mid, u, v), get(id*2+1, mid+1, r, u, v));
}


int main()
{
//	ios::sync_with_stdio(0);
//	cin.tie(NULL);
//	freopen("inp.in", "r", stdin);
	
	cin >> n >> k;
	for(int i=1; i<=n; i++)
	{
		cin >> arr[i];
	}
	
	build(1,1,n);
	
	for(int i=0; i<k; i++)
	{
		int x,y;
		cin >> x >> y;
		cout << get(1,1,n,x,y) << endl;
	}

}