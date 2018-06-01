#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <set>
#include <cmath>
using namespace std;

long long n;
set<long long> result;

void Try(long long so, int x, int y)
{
	if (so > n)
		return;
	if (so > 0)
		result.insert(so);

	if (10 * so + x != 0)
		Try(10 * so + x, x, y);
	if (10 * so + y != 0)
		Try(10 * so + y, x, y);
}

int main()
{
	cin >> n;

	result.clear();
	for (int i = 0; i <= 9; i++)
		for (int j = i + 1; j <= 9; j++)
			Try(0, i, j);

	cout << result.size() << endl;

	return 0;
}