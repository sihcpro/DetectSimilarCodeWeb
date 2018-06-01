#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <map>
#include <set>
using namespace std;

int main()
{
	int n;
	cin >> n;
	vector<int> a;
	a.resize(n);

	for (int i = 0; i < n; i++)
		cin >> a[i];

	sort(a.begin(), a.end());

	int tich;
	tich = max(a[n - 1] * a[n - 2] * a[n - 3], a[n - 1] * a[n - 2]);
	tich = max(tich, a[0] * a[1]);
	tich = max(tich, a[0] * a[1] * a[n - 1]);

	cout << tich << endl;

	return 0;
}