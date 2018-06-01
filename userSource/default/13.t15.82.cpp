#include <bits/stdc++.h>
using namespace std;
int main(){
	long long n, k;
	cin >> n >> k;
	long long *a = new long long[n + 5];
	for(long long i = 1; i <= n; i++){
		cin >> a[i];
	}
	sort(a + 1, a + n + 1);
	cout << a[k];
}