#include <iostream>
#include <map>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int ucln(int a, int b)
{
	if (a == 0)
		return b;
	return ucln(b % a, a);
}

bool compare(long long a, long long b)
{
	return a > b;
}

map<pair<int, int>, int> p;

#define MOD 1000000007

long long dp[4][300009];

int main()
{
	int n;
	cin >> n;

	long long result = 0;
	int count = 0;
	while (n--) {
		int a, b, c;
		cin >> a >> b >> c;
		pair<int, int> tmp;
		tmp = make_pair(a / ucln(a,b), b / ucln(a,b));
		count++;
		p[tmp]++;
	}

	vector<long long> f;
	for (map<pair<int, int>, int> ::iterator it = p.begin(); it != p.end(); ++it)
		f.push_back((*it).second);

	vector<long long> sum;
	sum.push_back(f[0]);
	for (int i = 1; i < f.size(); i++)
		sum.push_back(f[i]), sum[i] += sum[i - 1];

	for (int i = 1; i <= f.size(); i++)
		dp[1][i] = sum[i - 1];

	for (int i = 2; i <= 3; i++) {
		for (int j = 1; j <= f.size(); j++) {
			dp[i][j] += dp[i][j - 1] + (dp[i - 1][j - 1] * f[j - 1]) % MOD;
			dp[i][j] %= MOD;
		}
	}

	cout << dp[3][f.size()] << endl;
	return 0;
}