#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <map>
#include <set>
using namespace std;

vector<int> A;
int N;

int main()
{
	cin >> N;
	A.resize(N);
	for (int i = 0; i < N; i++)
		cin >> A[i];

	if (N > 1 && A[0] % 3 == 2) {
		if (A[1] % 2 == 0)
			cout << 1 << endl;
		else
			cout << 2 << endl;
	}
	else 
		cout << A[0] % 3 << endl;

	return 0;
}