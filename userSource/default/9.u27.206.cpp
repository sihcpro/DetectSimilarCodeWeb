#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <map>
#include <set>
using namespace std;

set<long long> result;

bool isPrime(long long n)
{
	if (n < 2)
		return false;
	for (long long i = 2; i * i <= n; i++)
		if (n % i == 0)
			return false;
	return true;
}


void cal(long long so, string p)
{
	if (isPrime(so))
		result.insert(so);

	for (int i = 0; i < p.length(); i++) {
		string newP = p;
		newP.erase(newP.begin() + i);
		cal(10 * so + (p[i] - '0'), newP);
	}
}

int main()
{
	int t;
	cin >> t;
	while (t--) {
		result.clear();
		string p;
		cin >> p;
		cal(0, p);
		cout << result.size() << endl;
	}

	return 0;
}