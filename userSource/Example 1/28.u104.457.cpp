#include <bits/stdc++.h>
using namespace std;
long long n, a[1000000];
int main()
{
	cin >> n;
	for (int i = 1; i <=n ; i++) cin >> a[i];
	sort(a + 1, a + 1 + n);
	cout << max(a[1]*a[n], max(a[1]*a[2], max(a[n-1]*a[n], max(a[1]*a[2]*a[3],max(a[1]*a[2]*a[n],max(a[1]*a[n-1]*a[n], a[n-2]*a[n-1]*a[n]))))));
}