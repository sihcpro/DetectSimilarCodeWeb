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

bool check(char a[3][3], char player)
{
	bool result = false;

	for (int i = 0; i < 3; i++) {
		int n = 0, d = 0;
		for (int j = 0; j < 3; j++) {
			if (a[i][j] == player)
				n++;
			if (a[j][i] == player)
				d++;
		}
		if (n == 3 || d == 3)
			result = true;
	}

	int c = 0, p = 0;
	for (int i = 0; i < 3; i++) {
		if (a[i][i] == player)
			c++;
		if (a[i][2 - i] == player)
			p++;
	}

	if (c == 3 || p == 3)
		result = true;

	return result;
}

void solve()
{
	char caro[3][3];

	int nX, n0;
	nX = n0 = 0;

	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 3; j++) {
			cin >> caro[i][j];
			if (caro[i][j] == 'X')
				nX++;
			else if (caro[i][j] == '0')
				n0++;
		}

	bool winX = false, win0 = false;
	winX = check(caro, 'X');
	win0 = check(caro, '0');

	int result = 0;

	if ((nX - n0 != 0 && nX - n0 != 1) || (winX && win0))
		result = -1;
	else{
		if (nX - n0 == 0) {
			if (winX)
				result = -1;
			else if (win0)
				result = 2;
			else
				result = 3;
		}
		else if (nX - n0 == 1) {
			if (win0)
				result = -1;
			else if (winX)
				result = 1;
			else {
				if (nX + n0 != 9)
					result = 4;
			}
		}
	}

	if (result == -1)
		cout << "illegal" << endl;
	else if (result == 0)
		cout << "draw" << endl;
	else if (result == 1)
		cout << "the first player won" << endl;
	else if (result == 2)
		cout << "the second player won" << endl;
	else if (result == 3)
		cout << "first" << endl;
	else if (result == 4)
		cout << "second" << endl;
}

int main()
{
	int t;
	cin >> t;
	while (t--)
		solve();

	return 0;
}