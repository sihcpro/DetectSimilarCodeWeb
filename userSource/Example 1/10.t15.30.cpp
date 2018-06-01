#include <bits/stdc++.h>
using namespace std;
long long exp(long long w, long long m){
	if(m == 1) return w;
	if(m == 0) return 1;
	if(m % 2 == 1){
		long long c = exp(w, m - 1) % 3;
		return (c * w) % 3;
	}
	long long c = exp(w, m / 2) % 3;
	return (c * c) % 3;
}
int main(){
	long long n;
	cin >> n;
	long long *a = new long long[n];
	for(long long i = 0; i < n; i++) cin >> a[i];
	if(n == 1){
		cout << a[0] % 3;
	} else {
			if(a[0] % 3 == 0){
			cout << 0;
		} else if(a[0] % 3 == 1){
			cout << 1;
		} else if(a[0] % 3 == 2){
			if(a[1] % 2 == 0) cout << 1;
			else cout << 2;
		}
	}
}