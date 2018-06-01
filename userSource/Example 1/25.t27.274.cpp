#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <map>
#include <set>
using namespace std;

bool compare(pair<int,int> a, pair<int,int> b)
{
	return a.first < b.first;
}

int main()
{
	int m, n;
	int c1, c2;

	cin >> m >> n;
	cin >> c1 >> c2;

	vector<pair<int, int> > a;
	a.resize(m + n);
	for (int i = 0; i < m; i++) {
		cin >> a[i].first;
		a[i].second = 0;
	}
	for (int i = m; i < m + n; i++) {
		cin >> a[i].first;
		a[i].second = 1;
	}

	sort(a.begin(), a.end(), compare);

	int res = 1E9, freq = 0;
	for (int i = 0; i < a.size() - 1; i++) {
		if (a[i].second != a[i + 1].second) {
			int k = abs(a[i].first - a[i + 1].first) + abs(c1 - c2);

			if (res > k) {
				res = k;
				freq = 1;
			}
			else if (res == k)
				freq++;
		}
	}

	cout << res << " " << freq << endl;

	return 0;
}