#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int n,k;
int a[100000];
int main()
{
//	ios::sync_with_stdio(0);
//	cin.tie(NULL);
//	freopen("inp.in", "r", stdin);
	cin >> n >> k;
	for(int i=0; i<n; i++){
		cin >> a[i];
	}
	sort(a, a+n);
	cout << a[k-1];

}