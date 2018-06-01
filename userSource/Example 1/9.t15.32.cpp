#include <bits/stdc++.h>
using namespace std;
long *snt = new long[10000005];
long **a = new long*[700000];
long SNT(){
	long cnt = 0;
	for(long long i = 2; i < 10000000; i++){
		if(snt[i] == 0){
			long j = i;
			while(j > 0){
				a[cnt][j % 10]++;
				j /= 10;
			}
//			for(int l = 0; l < 10; l++) cout << a[cnt][l] << " ";
//			cout << endl;
			cnt++;
			snt[i] = 1;
			for(long long j = (long long) i * i; j <= 10000000; j = j + i) snt[j] = i;
		}
	}
	return cnt;
}
int main(){
	for(long i = 0; i < 700000; i++){
		a[i] = new long[10];
		for(long k = 0; k < 10; k++) a[i][k] = 0;
	}
	long long lim = SNT();
	int n;
	cin >> n;
	int b[10];
	for(int z = 0; z < n; z++){
		long long r = 0;
		for(int q = 0; q < 10; q++) b[q] = 0;
		string u;
		cin >> u;
		int len = u.length();
		for(int q = 0; q < len; q++) b[u[q] - '0']++;
		for(long i = 0; i < lim; i++){
			int flag = 1;
			for(int t = 0; t < 10; t++){
				if(b[t] < a[i][t]){
					flag = 0;
					break;
				}
			}
			r += flag;
		}
		cout << r << endl;
	}
}