#include<bits/stdc++.h>

#define mk make_pair
#define pb push_back
#define fi first
#define se second

using namespace std;

typedef long long ll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;

const int MAXN = 1e5+7;

ll k,a,b;

ll tobase10(ll a, ll k)
{
	ll ret = 0;
	ll i = 1;
	while(a>0)
	{
		ret += i*(a%10);
		a/=10;
		i*=k; 
	}
	return ret;
}

void print(ll a, ll k)
{
	if(a>0)
	{
		print(a/k,k);
		cout << a%k;
	}
}

int main()
{
//	ios::sync_with_stdio(0);
//	cin.tie(NULL);
	//freopen("inp.in", "r", stdin);
	cin >> k >> a >> b;
	
	a = tobase10(a,k);
	b = tobase10(b,k);
//	cout << a << endl;
//	cout << b << endl;
	a+=b;
	print(a,k);

}