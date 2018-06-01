#include <bits/stdc++.h>
using namespace std;
long long gcd(long long a, long long b){
	if(a == 0) return b;
	if(b == 0) return a;
	if(a == b) return a;
	else if(a > b) return gcd(a % b, b);
	else return gcd(a, b % a);
}
int main(){
	long long a, b, c;
	cin >> a >> b >> c;
	long long r = 0;
	long long test = gcd(a, b);
//	cout << test << endl;
	bool debug = false;
	if(c % test == 0){
		int flag = 0;
		long long m1 = 0;
		long long s = c - m1 * a;
		while(s >= 0){
			if(s % b == 0){
				flag = 1;
				break;
			}
			else {
				m1++;
				s -= a;
			}
		}
		if(debug) cout << m1 << endl;
		if(flag == 1){
			long long m2 = m1 + 1;
			s = c - m2 * a;
			while(s >= 0){
				if(s % b == 0){
					flag = 2;
					break;
				}
				else {
					m2++;
					s -= a;
				}
			}
			if(flag != 2) m2 = m1;
			if(debug) cout << m2 << endl;
			if(m2 == m1){
				r = 1;
			} else {
				r = (c - m1 * a) / ((m2 - m1) * a) + 1;
			}
			if(debug) cout << r << endl;
			if((c - 0 * a) % b == 0) r--;
			if((c - 0 * b) % a == 0) r--;
			cout << r;
		}
	} else {
		cout << 0;
	}
}