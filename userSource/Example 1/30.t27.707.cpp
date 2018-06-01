#include <iostream>
using namespace std;

int main()
{
	long long n;
	cin >> n;

	long long sum = 1;
	long long tmp = 1;
	long long res = 1;

	while (tmp <= n) {
		res++;
		sum += res;
		tmp += sum + res;
	}

	cout << res - 1 << endl;

	return 0;
}