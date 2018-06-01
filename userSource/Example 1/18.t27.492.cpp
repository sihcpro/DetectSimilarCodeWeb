#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <set>
using namespace std;

int main()
{
	int n = 4;
	int k = 2;
	int change = 1;

	vector<vector<char> > mat;
	mat.resize(n);

	for (int i = 0; i < n; i++) {
		mat[i].resize(n);
		for (int j = 0; j < n; j++)
			cin >> mat[i][j];
	}

	for (int i = 0; i <= n - k; i++) {
		for (int j = 0; j <= n - k; j++) {
			int countA = 0;
			int countB = 0;
			for (int p = i; p < i + k; p++) {
				for (int q = j; q < j + k; q++) {
					if (mat[p][q] == '#')
						countA++;
					else if (mat[p][q] == '.')
						countB++;
				}
			}
			if (countA >= k * k - change || countB >= k * k - change) {
				cout << "YES" << endl;
				return 0;
			}

		}
	}

	cout << "NO" << endl;
	return 0;
}