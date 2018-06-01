#include <bits/stdc++.h>
using namespace std;
int main(){
	long long n, m;
	cin >> n >> m;
	long long **a = new long long*[n];
	long long **h = new long long*[n];
	long long **v = new long long*[n];
	for(long long i = 0; i < n; i++){
		a[i] = new long long[m];
		h[i] = new long long[m];
		v[i] = new long long[m];
		for(long long j = 0; j < m; j++){
			cin >> a[i][j];
		}
	}
	for(long long i = 0; i < n; i++){
		long long max = 0;
		for(long long j = 0; j < m; j++){
			if(max < a[i][j]) max = a[i][j];
		}
		for(long long j = 0; j < m; j++){
			if(a[i][j] == max) h[i][j] = 0;
			else h[i][j] = a[i][j];
		}
	}
	for(long long j = 0; j < m; j++){
		long long max = 0;
		for(long long i = 0; i < n; i++){
			if(max < a[i][j]) max = a[i][j];
		}
		for(long long i = 0; i < n; i++){
			if(a[i][j] == max) v[i][j] = 0;
			else v[i][j] = a[i][j];
		}
	}
//	for(long long i = 0; i < n; i++){
//		for(long long j = 0; j < m; j++){
//			cout << h[i][j] << " ";
//		}
//		cout << endl;
//	}
//	cout << "----\n";
//	for(long long i = 0; i < n; i++){
//		for(long long j = 0; j < m; j++){
//			cout << v[i][j] << " ";
//		}
//		cout << endl;
//	}
	long long re = 0;
	for(long long i = 0; i < n; i++){
		for(long long j = 0; j < m; j++){
			re += min(v[i][j], h[i][j]);
		}
	}
	cout << re;
//	for(long long i = 0; i < n; i++){
//		for(long long j = 0; j < m; j++){
//			cout << a[i][j] << " ";
//		}
//		cout << endl;
//	}
}