#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
	vector<int> a;
	int n;
	cin >> n;
	
	for (int t, i = 0; i < n; i++) {
		cin >> t;
		a.push_back(t);
	}
	
	sort(a.begin(), a.end());
	int q = max(a[0]*a[1], a[n-1]*a[n-2]);
	int p = max(a[n-1]*a[0]*a[1], a[n-1]*a[n-2]*a[n-3]);
	cout << max(p, q);

}
