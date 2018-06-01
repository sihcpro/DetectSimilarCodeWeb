#include <iostream>
#include <queue>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	int T; cin >> T;
	while (T--) {
		int n; cin >> n;
		priority_queue<long long> q;
		for (int i = 0; i < n; i++) {
			int x; cin >> x;
			q.push(-x);
		}
		
		long long total = 0;
		while (q.size() != 1) {
			long long x = q.top(); q.pop();
			long long y = q.top(); q.pop();
			total += -(x + y);
			q.push(x + y);
		}
		
		cout << total << endl;
	}
	
	return 0;
}