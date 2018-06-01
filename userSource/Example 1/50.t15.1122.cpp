#include <bits/stdc++.h>
using namespace std;
long long mod = 1000000007ll;
long long snt[10000][4];
bool check(long long x){
	long long kt = sqrt(x);
    for(long long i = 0; snt[i][0] <= kt; i++)
        if(x % snt[i][0] == 0)	return false;
	return true;
}
long long maxNt= 1;
void SNT(){
    snt[0][0] = 2;
    for(long long i = 3; i < 100005; i += 2)
        if(check(i)){
        	snt[maxNt++][0] = i;
		}
}
long long exp(long long a, long long b){
	if(b == 0) return 1;
	if(b == 1) return a;
	if(b % 2 == 0){
		long long c = exp(a, b / 2);
		return (c * c) % mod;
	}
	long long c = exp(a, b - 1);
	return (c * a) % mod;
}
long long comb(long long a, long long b){
	long long c = a - b;
//	cout << a << " " << b << " " << c << endl;
	for(long long i = 0; i < maxNt; i++){
    	snt[i][1] = 0;
    	snt[i][2] = 0;
    	snt[i][3] = 0;
		long long ba = snt[i][0], ta;
		while(1){
			ta = a / ba;
			if(ta <= 0) break;
			else {
				snt[i][1] += ta;
				ba *= snt[i][0];
			}
		}
//		cout << snt[i][1] << endl;
		long long bb = snt[i][0], tb;
		while(1){
			tb = b / bb;
			if(tb <= 0) break;
			else {
				snt[i][2] += tb;
				bb *= snt[i][0];
			}
		}
//		cout << snt[i][2] << endl;
		long long bc = snt[i][0], tc;
		while(1){
			tc = c / bc;
			if(tc <= 0) break;
			else {
				snt[i][3] += tc;
				bc *= snt[i][0];
			}
		}
//		cout << snt[i][3] << endl;
	}
	long long re = 1;
	for(long long i = 0; i < maxNt; i++){
		re = (re * exp(snt[i][0], snt[i][1] - snt[i][2] - snt[i][3])) % mod;
	}
	return re;
}
int main(){
//	freopen("#input.txt", "r", stdin);
//	freopen("#output.txt", "w", stdout);
	SNT();
//	for(long long i = 0; i < maxNt; i++){
//		cout << snt[i][0] << " ";
//	}
	long long n, k;
	while(scanf("%ld%ld", &n, &k) == 2){
		n = n - k;
		long long r = comb(n + k - 1, k - 1);
	//	for(long long i = 0; i < maxNt; i++){
	//		cout << snt[i][1] << " | " << snt[i][2] << " | " << snt[i][3] << endl;
	//		if(snt[i][0] > n) break;
	//	}
		cout << r << endl;
	}
//	fclose(stdin);
//	fclose(stdout);
}