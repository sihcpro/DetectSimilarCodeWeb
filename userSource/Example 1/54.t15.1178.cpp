#include <bits/stdc++.h>
using namespace std;
int main(){
	long long k;
	string a, b;
	cin >> k >> a >> b;
	long long pa = a.length() - 1;
	long long pb = b.length() - 1;
	string c = "";
	string d = "";
	long long carry = 0;
	long long v;
	while(pa >= 0 || pb >= 0){
		v = (carry + (pa < 0 ? 0 : a[pa] - '0') + (pb < 0 ? 0 : b[pb] - '0'));
		d = (v % k) + '0';
//		cout << (pa < 0 ? 0 : a[pa] - '0') << " " << (pb < 0 ? 0 : b[pb] - '0') << endl;
		carry = v / k;
		if(pa >= 0) pa--;
		if(pb >= 0) pb--;
		c.insert(0, d);
//		cout << v << " | " << d << " | " << carry << " | " << c << endl;
	}
	if(carry == 1){
		c.insert(0, "1");
	}
	cout << c;
}