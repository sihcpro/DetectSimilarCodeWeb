#include <bits/stdc++.h>
using namespace std;
int main(){
	double a = sqrt(2), b = sqrt(3);
	double c = 1 + a + b;
	double s;
	cin >> s;
	double z = sqrt(s / 2);
	double r = z / c;
	cout << fixed << setprecision(4) << r;
//	((1 + sqrt(2) + sqrt(3)) * 0.1) ^ 2 * 2
}