#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <set>
using namespace std;

int main()
{
	string k;
	cin >> k;

	string res;
	for (int i = 0; i < k.length(); i++) {
		if (res.length() == 0)
			res.push_back(k[i]);
		else {
			if (res[res.length() - 1] == '/' && k[i] == '/')
				continue;
			else
				res.push_back(k[i]);
		}
	}

	if (res.length() > 1 && res[res.length() - 1] == '/')
		res.erase(res.begin() + res.length() - 1);

	cout << res << endl;

	return 0;
}