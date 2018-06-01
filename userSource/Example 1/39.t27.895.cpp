#include <iostream>
#include <map>
#include <queue>
#include <algorithm>
#include <set>
#include <cmath>
#include <string>
#include <stack>
#include <functional>

using namespace std;

int main()
{
	int n;
	cin >> n;

	long long result = 0;
	while (n--) {
		int so;
		cin >> so;

		int mu = so % 10;
		so /= 10;

		result += pow(so, mu);
	}

	cout << result << endl;

	return 0;
}