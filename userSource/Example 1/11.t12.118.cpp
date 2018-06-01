#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int t,n;

int main()
{
	ios::sync_with_stdio(0);
//	cin.tie(NULL);
//	freopen("inp.in", "r", stdin);
	cin >> t;
	while(t--)
	{
		ll ans = 0;
		priority_queue<ll, vector<ll>, greater<ll> > pq;
		cin >> n;
		for(int i=0; i<n; i++) 
		{
			int k;
			cin >> k;
			pq.push(k);
		}
		while(pq.size() != 1)
		{
			ll a,b;
			a = pq.top(); pq.pop();
			b = pq.top(); pq.pop();
			ans += a+b;
//			cout << a+b << endl;
			pq.push(a+b);
		}
		cout << ans << endl;
	}
}