#include <iostream>
#include <cstdio>
#include <queue>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    int T; cin >> T;
    while (T--) {
        priority_queue<long long> Q;
        int n; cin >> n;
        for (int i = 0, x; i < n; ++i) {
            cin >> x;
            Q.push(-x);
        }

        long long res = 0;
        while (Q.size() > 1) {
            long long u = -Q.top(); Q.pop();
            long long v = -Q.top(); Q.pop();
            res += u + v;
            Q.push(-(u + v));
        }
        printf("%lld\n", res);
    }
}