#include <bits/stdc++.h>
using namespace std;
int main(){
	long long **a = new long long*[4];
	for(long long i = 0; i < 4; i++){
		a[i] = new long long[4];
	}
	char d;
	for(long long i = 0; i < 4; i++){
		for(long long j = 0; j < 4; j++){
			cin >> d;
			if(d == '.') a[i][j] = 1;
			else a[i][j] = 0;
		}
	}
	bool flag = false;
	for(long long i = 0; i < 3; i++){
		for(long long j = 0; j < 3; j++){
			long long c0 = 0;
			long long c1 = 0;
			if(a[i][j] == 1) c1++; else c0++;
			if(a[i + 1][j] == 1) c1++; else c0++;
			if(a[i][j + 1] == 1) c1++; else c0++;
			if(a[i + 1][j + 1] == 1) c1++; else c0++;
			if(c0 == 3 || c0 == 4 || c1 == 3 || c1 == 4) flag = true;
		}
	}
	if(flag) cout << "YES";
	else cout << "NO";
}