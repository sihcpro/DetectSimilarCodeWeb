#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
	vector<int> a;
	int n, k;
	cin >> n >> k;
	
	for (int t, i = 0; i < n; i++) {
		cin >> t;
		a.push_back(t);
	}
	
	sort(a.begin(), a.end());
	cout << a[k-1];
}
