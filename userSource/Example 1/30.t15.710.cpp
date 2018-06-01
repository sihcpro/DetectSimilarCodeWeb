#include <bits/stdc++.h>
using namespace std;
int main(){
	long long n;
	cin >> n;
	long long m = ceil(sqrt(n));
	// cout << m;
	long long r = 0;
	if(n == 1) cout << 1;
	else {
		for(long long i = 0; i <= m; i++){
			long long k = i * (i + 1) * i / 2;
			k = k - i * (i - 1) * (i + 1) / 3;
			k = k + i * (i + 1) / 2 - 1;
			// cout << k << endl;
			if(k > n){
				r = i - 1;
				break;
			}
		}
		cout << r;
	}
}