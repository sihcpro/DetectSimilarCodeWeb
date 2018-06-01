#include <bits/stdc++.h>
using namespace std;
long long mod = 1000003ll;
long long exp(long long a, long long b){
	if(b == 0) return 1;
	if(b == 1) return a;
	if(b % 2 == 0){
		long long c = exp(a, b / 2) % mod;
		return (c * c) % mod;
	}
	long long c = exp(a, b - 1) % mod;
	return (c * a) % mod;
}
int main(){
	long long n;
	cin >> n;
	if(n == 0) cout << 1;
	else if(n == 1) cout << 1;
	else {
		cout << exp(3, n - 1);
	}
}