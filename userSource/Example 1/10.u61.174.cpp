#include <iostream>
using namespace std;

int main() {
	int n; cin >> n;
	int x; cin >> x;
	if (n == 1 || x % 3 < 2) cout << x % 3;
	else {
		int y; cin >> y;
		cout << (y % 2 ? 2 : 1); 
	}
	return 0;
}