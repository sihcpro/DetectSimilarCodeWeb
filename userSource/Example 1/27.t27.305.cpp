#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <map>
#include <set>
using namespace std;

int a[1009][1009];
int sd, sc;

int maxDong(int dong)
{
	int res = a[dong][0];
	for (int i = 1; i < sc; i++)
		res = max(res, a[dong][i]);
	return res;
}

int maxCot(int cot)
{
	int res = a[0][cot];
	for (int i = 1; i < sd; i++)
		res = max(res, a[i][cot]);
	return res;
}

int main()
{
	long long result = 0;
	cin >> sd >> sc;
	for (int i = 0; i < sd; i++)
		for (int j = 0; j < sc; j++) {
			cin >> a[i][j];
			result += a[i][j];
		}

	vector<int> max_dong, max_cot;
	vector<bool> check_dong, check_cot;
	max_dong.resize(sd);
	max_cot.resize(sc);

	for (int i = 0; i < sd; i++)
		max_dong[i] = maxDong(i);

	for (int i = 0; i < sc; i++)
		max_cot[i] = maxCot(i);

	check_dong.resize(sd);
	check_cot.resize(sc);

	for (int i = 0; i < sd; i++)
		for (int j = 0; j < sc; j++)
			if (a[i][j] == max_dong[i] && a[i][j] == max_cot[j]) {
				check_dong[i] = true;
				check_cot[j] = true;
				result -= a[i][j];
			}

	for (int i = 0; i < sd; i++)
		if (!check_dong[i])
			result -= max_dong[i];

	for (int i = 0; i < sc; i++)
		if (!check_cot[i])
			result -= max_cot[i];

	cout << result << endl;
	
	return 0;
}