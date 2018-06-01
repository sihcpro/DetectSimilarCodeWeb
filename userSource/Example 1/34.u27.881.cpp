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

long long f[100009][3];
string s;

int main()
{
	cin >> s;
	
	long long res = 0;
	for (int i = 1; i <= s.length(); i++) {
		int a = (int)(s[i - 1] - '0');
		f[i][a % 3] = 1;
		if (a == 0)
			f[i][a % 3] = 0, res++;

		for (int j = 0; j < 3; j++)
			f[i][(j + a) % 3] += f[i - 1][j];

		if (a % 2 == 0)
			res += f[i][0];
	}

	cout << res << endl;

	return 0;
}