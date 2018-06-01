#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <set>
#include <cmath>
using namespace std;

int main()
{
	long long n;
	vector<long long> f;

	cin >> n;
	f.resize(n + 1);
	f[0] = f[1] = 1;

	for (int i = 2; i <= n; i++)
		f[i] = (f[i - 1] * 3) % 1000003;

	cout << f[n] << endl;
}