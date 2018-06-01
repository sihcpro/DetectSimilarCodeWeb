#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

ll n;

int main()
{
//	ios::sync_with_stdio(0);
//	cin.tie(NULL);
//	freopen("inp.in", "r", stdin);
	cin >> n;
//	if (n==0) {
//		cout << 0;
//		return 0;
//	}
//	if (n<6){
//		cout << 1;
//		return 0;
//	}
	ll k = 0;
	ll res = 0;
	while(res <= n)
	{
		k++;
		res = k*k*(k+1)/2 - k*(k-1)*(k+1)/3 + k*(k+1)/2 -1;
//		cout << "k: " << k << " res: " << res << endl;
	}
	cout << k-1;
}