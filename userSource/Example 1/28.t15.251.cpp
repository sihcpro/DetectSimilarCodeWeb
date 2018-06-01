#include <bits/stdc++.h>
using namespace std;
int main(){
	long long n;
	cin >> n;
	long long *a = new long long[n];
	for(long long i = 0; i < n; i++){
		cin >> a[i];
	}
	sort(a, a + n);
	long long s[6];
	s[0] = (a[n - 1] * a[n - 2]);
	s[1] = (a[0] * a[1]);
	s[2] = (a[0] * a[1] * a[2]);
	s[3] = (a[n - 1] * a[n - 2] * a[n - 3]);
	s[4] = (a[n - 1] * a[n - 2] * a[0]);
	s[5] = (a[0] * a[1] * a[n - 1]);
	sort(s, s + 6);
	cout << s[5];
}