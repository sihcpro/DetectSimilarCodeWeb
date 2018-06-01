#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() 
{
	vector<int> a;
	int k, n;

	cin >> n >> k;
	a.resize(n);
	for (int i = 0; i < n; i++)
		cin >> a[i];

	sort(a.begin(), a.end());
	
	cout << a[k - 1] << endl;

	return 0;
}